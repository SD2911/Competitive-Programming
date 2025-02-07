You are given a string s. You can apply this operation to the string exactly once: choose index i
 and move character si to the beginning of the string (removing it at the old position). For example, if you apply the operation with index i=4 to the string "abaacd" with numbering from 1
, you get the string "aabacd". What is the lexicographically minimal† string you can obtain by this operation?

†
A string a is lexicographically smaller than a string b of the same length if and only if the following holds:
in the first position where a and b differ, the string a has a letter that appears earlier in the alphabet than the corresponding letter in b.
Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The first line of each test case contains a single integer n (1≤n≤105) — the length of the string.

The second line of each test case contains the string s of length n, consisting of lowercase English letters.

It is guaranteed that the sum of n over all test cases does not exceed 105
.

Output
For each test case, on a separate line print the lexicographically smallest string that can be obtained after applying the operation to the original string exactly once.

Example
InputCopy
4
3
cba
4
acac
5
abbcb
4
aaba
OutputCopy
acb
aacc
abbcb
aaab







#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
        int n;
        cin >> n;
        string s;
        cin >> s;
        
 int min_index = s.rfind(*min_element(s.begin(),s.end()));
       cout<<s[min_index]+s.substr(0,min_index)+s.substr(min_index+1)<<endl; 
        
      
          
       }
        
      return 0;
    }
