⛳Search X in sorted array:
class Solution{
public:
    int search(vector<int> &nums, int target){
        int n = nums.size();
             int low=0, high=n-1;
             while(low<high){
                
                int mid = (low+high)/2;
                if(nums[mid]==target) return mid;
                if(nums[mid]<target) low=mid+1;
                else if(nums[mid]>=target) high=mid;
             }

             return -1;
    }
};


⛳lower bound:
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.
The lower bound algorithm finds the first and smallest index in a sorted array where the value at that
index is greater than or equal to a given key i.e. x.
If no such index is found, return the size of the array.
Example 1
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation:       Index 1 is the smallest index such that arr[1] >= x.

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
         int n = nums.size();
         int low = 0, high = n-1;
         int ans = n;
         while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=x){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
         }
         return ans;
    }
};



⛳upper bound:
Given a sorted array of nums and an integer x, write a program to find the upper bound of x.
The upper bound of x is defined as the smallest index i such that nums[i] > x.
If no such index is found, return the size of the array.
Example 1
Input : n= 4, nums = [1,2,2,3], x = 2
Output:3
Explanation:
Index 3 is the smallest index such that arr[3] > x.
Example 2
Input : n = 5, nums = [3,5,8,15,19], x = 9
Output: 3
Explanation:
Index 3 is the smallest index such that arr[3] > x.

    

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
         int n = nums.size();
         int low = 0, high = n-1;
         int ans = n;
         while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
         }
         return ans;
    }
};

🍕STL shortcut : upper_bound(nums.begin(),nums.end(),target) - nums.begin();



⛳ Search Insert Position :
Given a sorted array of nums consisting of distinct integers and a target value, return the index if the target is found.
    If not, return the index where it would be if it were inserted in order.
Example 1
Input: nums = [1, 3, 5, 6], target = 5
Output: 2
Explanation: The target value 5 is found at index 2 in the sorted array. Hence, the function returns 2.

      solution : same as lower bound.



⛳  Floor and Ceil :
 floor : largest element in array <= x
    ceil :  smallest element in array >= x

note : ceil same as lower bound

#include <bits/stdc++.h>
using namespace std;

class FloorCeilFinder {
public:
    // Function to find the floor of x
    int findFloor(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     // Potential floor
                low = mid + 1;      // Search right side
            } else {
                high = mid - 1;     // Search left side
            }
        }
        return ans;
    }

    // Function to find the ceiling of x
    int findCeil(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];     // Potential ceil
                high = mid - 1;     // Search left side
            } else {
                low = mid + 1;      // Search right side
            }
        }
        return ans;
    }

    // Function to return both floor and ceil
    pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
        int f = findFloor(arr, n, x);
        int c = findCeil(arr, n, x);
        return make_pair(f, c);
    }
};

int main() {
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = 6, x = 5;
    FloorCeilFinder finder;
    pair<int, int> ans = finder.getFloorAndCeil(arr, n, x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;
    return 0;
}



⛳ First and Last Occurrences in Array :
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

solution :
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int l = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int r = upper_bound(nums.begin(),nums.end(),target)-nums.begin();   
      if(l==r) return {-1,-1};
      else return {l,r-1};
    }
};


⛳ Count Occurrences in a Sorted Array

The total number of occurrences  = (last index - first index + 1) and return this length as the answer.


⛳ Search in Rotated Sorted Array :    
There is an integer array nums sorted in ascending order (with distinct values).
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) 
    such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
    For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, 
or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.    

    solution : 
    class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
         int low = 0, high = n - 1;
         while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target < nums[mid]) high = mid-1;
                else low = mid + 1;
            }
            else {
                if(nums[mid]<target && target<=nums[high]) low = mid + 1;
                else high = mid - 1;
            }
         }
           return -1;
    }
};

time complexity : O(log N)
space complexity : O(1)


⛳ Search in Rotated Sorted Array-2 :
   this time array may contain duplicate value.
   
 class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
         int low = 0, high = n - 1;
         while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
             if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
                 low++;
                 high--;
                 continue;
             }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target < nums[mid]) high = mid-1;
                else low = mid + 1;
            }
            else {
                if(nums[mid]<target && target<=nums[high]) low = mid + 1;
                else high = mid - 1;
            }
         }
           return -1;
    }
};

time complexity : O(log N)
space complexity : O(1)



⛳Find minimum in Rotated Sorted Array  :

Problem Statement:
Given an integer array arr of size N, sorted in ascending order (with distinct values),
the array is rotated at any index which is unknown. Find the minimum element in the array.

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
             int low = 0, high = n-1;
             while(low<high){
                 int mid = (low+high)/2;
                 if(nums[mid]>nums[high]) low=mid+1;
                 else high=mid;
             }
             return nums[low];
    }
};    


⛳Find out how many times the array is rotated  :
Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated
between 1 to N times which is unknown. Find how many times the array has been rotated.

    solution :    index of the minimum number
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
             int low = 0, high = n-1;
             while(low<high){
                 int mid = (low+high)/2;
                 if(nums[mid]>nums[high]) low=mid+1;
                 else high=mid;
             }
             return nums[low];
    }
};    




⛳Single element in a Sorted Array:
Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low = 1, high = n-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]) return nums[mid];
      // left half
      if((mid%2==1&&nums[mid]==nums[mid-1])||(mid%2==0&&nums[mid]==nums[mid+1]) ) low = mid+1;
      else high = mid -1;     
        }
        return -1;
    }
};

