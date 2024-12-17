A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.
Example 1:
Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.


😭class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        int diff = a[1] - a[0];
        for(int i=1; i<n; i++){
            if((a[i]-a[i-1])!=diff) return false;
           
        }
        return true;
    }
};












