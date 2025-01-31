You are given two positive integers n and k.

Your task is to find a string s such that all possible strings of length n that can be formed using the first k
 lowercase English alphabets occur as a subsequence of s.
If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.

Note: A string a is called a subsequence of another string b if a can be obtained by deleting some (possibly zero) characters from b
 without changing the order of the remaining characters.

Input
The first line of input contains a single integer t (1≤t≤676) denoting the number of test cases.
Each test case consists of a single line of input containing two integers n (1≤n≤26) and k (1≤k≤26).

Output
For each test case, print a single line containing a single string s which satisfies the above property. If there are multiple answers, print the one with the smallest length. If there are still multiple answers, you may print any of them.

Example
InputCopy
4
1 2
2 1
2 2
2 3
OutputCopy
ab
aa
baab
abcbac





☠️
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
        test{
           int n,k;
           cin >> n >> k;
           
     for(int i=0; i<n; i++){
         
//Inner loop (for(char c = 'a'; c < 'a' + k; c++)): This inner loop iterates over the first k characters starting from 'a'. The variable c takes values from 'a' to 'a' + k-1 (because the loop stops when c becomes 'a' + k, i.e., it does not include the k-th letter).

//For example, if k = 3, the characters will be 'a', 'b', 'c'.         
         for(char c='a'; c<'a'+k; c++){
             cout << c;
         }
     } 
      cout<<endl;
        }   
      return 0;
    }
