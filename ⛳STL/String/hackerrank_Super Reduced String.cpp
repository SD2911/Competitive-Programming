Reduce a string of lowercase characters in range ascii[‘a’..’z’]by doing a series of operations. In each operation, select a pair of adjacent letters that match, and delete them.
Delete as many characters as possible using this method and return the resulting string. If the final string is empty, return Empty String

Example.
aab shortens to b in one operation: remove the adjacent a characters.
Remove the two 'b' characters leaving 'aa'. Remove the two 'a' characters to leave ''. Return 'Empty String'.
Function Description
Complete the superReducedString function in the editor below.
superReducedString has the following parameter(s):

string s: a string to reduce
Returns

string: the reduced string or Empty String
Input Format

A single string, .

Constraints

Inputcopy	Outputcopy
aaabccddd
abd






#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
       string s;
       cin >> s;
      
      //check if the num is exactly 8.
      if(s.length()!=8) {
          cout<<"No"<<endl;
          return 0;
      }
    
    // Check if the middle part is a valid 6-digit number
      if(!isupper(s[0]) || !isupper(s[7])){
          cout<<"No"<<endl;
          return 0;
      }
      
      // Convert the extracted part to an integer and check the range
      //The stoi function in C++ is used to convert a std::string to an int
      int num = stoi(s.substr(1,6));
      if(num<100000 || num>999999){
          cout<<"No"<<endl;
          return 0;
      }
      
      cout<<"Yes"<<endl;
       
       
      return 0;
    }
