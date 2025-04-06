A string is called a k-string if it can be represented as k concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string and so on. Obviously any string is a 1-string.

You are given a string s, consisting of lowercase English letters and a positive integer k. Your task is to reorder the letters in the string s in such a way that the resulting string is a k-string.

Input
The first input line contains integer k (1 ≤ k ≤ 1000). The second line contains s, all characters in s are lowercase English letters. The string length s satisfies the inequality 1 ≤ |s| ≤ 1000, where |s| is the length of string s.

Output
Rearrange the letters in string s in such a way that the result is a k-string. Print the result on a single output line. If there are multiple solutions, print any of them.

If the solution doesn't exist, print "-1" (without quotes).

Examples
InputCopy
2
aazz
OutputCopy
azaz
InputCopy
3
abcabcabz
OutputCopy
-1





#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
#define lcm (a * b) / __gcd(a,b);
#define PI 3.141592653589793
const int MOD = 1'000'000'007;
using namespace std;
int main(){
    fast
     //test{
            int n;
            cin >> n;
           string s;
           cin >> s;
          // int n = s.length();
           
           map<char, int> freq;
           
           for(char ch:s) freq[ch]++;
           
          string res = "";
          
          for(auto &entry : freq){
              if(entry.second%n!=0){
                  cout<<-1<<endl;
                  return 0;
              }
              res += string(entry.second/n,entry.first);
          }
          
          string final = "";
          for(int i=0; i<n; i++){
              final += res;
          }
            
          cout<<final<<endl;  
       
       //}
      return 0;
    }
