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







