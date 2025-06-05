Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6






#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int cnt(const string& s,int index){
    if(index==s.size()) return 0;
    return (isvowel(s[index])?1:0)+cnt(s,index+1);
}

int main(){
    fast
      //test{
         string s;
         getline(cin,s);
         cout<<cnt(s,0)<<endl;
        //}
      return 0;
    }
