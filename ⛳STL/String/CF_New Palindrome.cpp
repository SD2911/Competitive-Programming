A palindrome is a string that reads the same from left to right as from right to left. For example, abacaba, aaaa, abba, racecar are palindromes.
You are given a string s consisting of lowercase Latin letters. The string s is a palindrome.
You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s).

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.
The only line of each test case contains a string s (2≤|s|≤50) consisting of lowercase Latin letters. This string is a palindrome.

Output
For each test case, print YES if it is possible to rearrange the letters in the given string to get another palindrome. Otherwise, print NO.
You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).

Example
InputCopy
3
codedoc
gg
aabaa
OutputCopy
YES
NO
NO





☠️
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
        test{
           string s;
           cin >> s;
           
           s = s.substr(0, s.size()/2);
           
//The unique function is used here to remove adjacent duplicate characters from the string s. It returns an iterator to the position where duplicates end.
//unique(s.begin(), s.end()) rearranges the string in such a way that all unique characters are placed at the beginning, and the function returns an iterator to the "end" of the unique characters.
//By subtracting s.begin() from the result of unique, the value of k becomes the count of unique characters in the string s.
           
     int k = unique(s.begin(),s.end())-s.begin();
 
//If k == 1, it means all characters in the substring s are the same (since only one unique character is left in the first half).
//If k > 1, it means the first half contains more than one distinct character. 

     if(k==1) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
          
      
        }   
      return 0;
    }
