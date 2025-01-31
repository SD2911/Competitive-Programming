A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English alphabet. Ignore case. Return either pangram or not pangram as appropriate.

Example

The string contains all letters in the English alphabet, so return pangram.

Function Description

Complete the function pangrams in the editor below. It should return the string pangram if the input string is a pangram. Otherwise, it should return not pangram.

pangrams has the following parameter(s):

string s: a string to test
Returns

string: either pangram or not pangram
Input Format

A single line with string .

Constraints


Each character of , 

Sample Input

Sample Input 0

We promptly judged antique ivory buckles for the next prize

Sample Output 0

pangram

Sample Explanation 0

All of the letters of the alphabet are present in the string.

Sample Input 1

We promptly judged antique ivory buckles for the prize

Sample Output 1

not pangram

Sample Explanation 0

The string lacks an x.






#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
       string s;
       getline(cin,s);
   unordered_set<char> letters;    
// The unordered_set automatically ensures that each character appears only once.       
     for(char c: s){
          if(isalpha(c)) letters.insert(tolower(c));   
       }
  //The isalpha(c) function checks if the character is a letter (either uppercase or lowercase).     
    //The tolower(c) function converts any uppercase letter to lowercase.
       if(letters.size()==26) cout<<"pangram"<<endl;
       else cout<<"not pangram"<<endl;
        
      return 0;
    }
