Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically.
The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
InputCopy
aaaa
aaaA
OutputCopy
0
InputCopy
abs
Abz
OutputCopy
-1
InputCopy
abcdefg
AbCdEfF
OutputCopy
1




#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      string s1, s2;
      cin >> s1 >> s2;
    for(char &c : s1) c=tolower(c);
     for(char &c : s2) c=tolower(c);
     
     if(s1==s2) cout<<0<<endl;
     else if(s1<s2) cout<<-1<<endl;
     else cout<<1<<endl;
      return 0;
    }
