You were walking down the street and heard a sound. The sound was described by the string s
 consisting of lowercase and uppercase Latin characters. Now you want to find out if the sound was a cat meowing.

For the sound to be a meowing, the string can only contain the letters 'm', 'e', 'o' and 'w', in either uppercase or lowercase. Also:

string must start with non-empty sequence consisting only of characters 'm' or 'M'
it must be immediately followed by non-empty sequence consisting only of characters 'e' or 'E'
it must be immediately followed by non-empty sequence consisting only of characters 'o' or 'O'
it must be immediately followed by non-empty sequence consisting only of characters 'w' or 'W', this sequence ends the string, after it immediately comes the string end
For example, strings "meow", "mmmEeOWww", "MeOooOw" describe a meowing, but strings "Mweo", "MeO", "moew", "MmEW", "meowmeow" do not.

Determine whether the sound you heard was a cat meowing or something else.

Input
The first line of input data contains a single integer t (1≤t≤104) — the number of test cases.
The description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤50) — the length of the string describing the sound.

The second line of each test case contains a string s of n characters. The string describes the sound you heard and consists only of lowercase and uppercase Latin letters.

Output
For each test case, output on a separate line:

YES if the sound was a cat meowing;
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as positive response).

Example
InputCopy
7
4
meOw
14
mMmeoOoWWWwwwW
3
mew
7
MmeEeUw
4
MEOW
6
MmyaVW
5
meowA
OutputCopy
YES
YES
NO
NO
YES
NO
NO




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
           
   //The transform function is used to convert every character of the string s to lowercase.
//The tolower function is called for each character to make sure the check is case-insensitive.
 transform(s.begin(),s.end(),s.begin(), [](char c){
          return tolower(c);
          
      });
      
      //The unique function removes consecutive duplicate characters from the string. For example, if the string is "meeooow", it becomes "meow". 
      //the erase function is used to remove the leftover characters beyond the unique part of the string.
      s.erase(unique(s.begin(),s.end()),s.end());
       
       if(s=="meow") cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
           
       
        }   
      return 0;
    }
