You are given a string S.S consisting of uppercase English letters and digits. Determine whether S satisfies the following condition.

S is a concatenation of the following characters and string in the order listed.
An uppercase English letter
A string of length 6
6 that is a decimal representation of an integer between 100000 and 999999, inclusive
An uppercase English letter Constraints S
S consists of uppercase English letters and digits.The length of S is between 
1
1 and 
10
10, inclusive.
Input
The input is given from Standard Input in the following format:

S
S
Output
If 
S
S satisfies the condition in the problem statement, print Yes; otherwise, print No.

Sample 1
Inputcopy	Outputcopy
Q142857Z
Yes





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
