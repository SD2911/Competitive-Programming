Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
Example 1:
Input: n = 11
Output: 3
Explanation:
The input binary string 1011 has a total of three set bits.
Example 2:
Input: n = 128
Output: 1
Explanation:
The input binary string 10000000 has a total of one set bit.
Example 3:
Input: n = 2147483645
Output: 30
Explanation:
The input binary string 1111111111111111111111111111101 has a total of thirty set bits.
Constraints: 1 <= n <= 231 - 1


⛳approach:
  Every number can be written in binary.
You just need to count how many bits are 1.
  n & (n - 1)-> this removes the rightmost set bits (1)


☠️code:
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n!=0){
            n = n & (n-1);
            cnt++;
        }
           return cnt;
    }
};
