⛳ Finding Sqrt of a number using Binary Search :

You are given a positive integer n. Your task is to find and return its square root.
If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
class Solution {
public:
    // This function returns the floor value of the square root of a number
    int mySqrt(int x) {
        // Handle small numbers directly
        if (x < 2) return x;
        // Initialize binary search range
        int left = 1, right = x / 2, ans = 0;
        // Perform binary search
        while (left <= right) {
            // Find middle point
            long long mid = left + (right - left) / 2;
            // Check if mid*mid is less than or equal to x
            if (mid * mid <= x) {
                // Store mid as potential answer
                ans = mid;
                // Move to right half
                left = mid + 1;
            } else {
                // Move to left half
                right = mid - 1;
            }
        }
        // Return final answer
        return ans;
    }
};


⛳ Find Nth root of a number :
Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M.
  If the 'nth root is not an integer, return -1.
     int nthRoot(int n, int m){
                 int low = 1, high = m;
                 while(low<=high){
                     int mid = (low+high)/2;
                     ll ans = 1;
                     for(int i=0; i<n; i++){
                         ans *= mid;
                         if(ans>m) break;
                     }
               if(ans == m) return mid;
               if(ans<m) low = mid + 1;
               else high = mid - 1;
                 }
             }
          
           return -1;
     
        }

