Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:
Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
Example


This password is 5 characters long and is missing an uppercase and a special character. The minimum number of characters to add is .


This password is 5 characters long and has at least one of each character type. The minimum number of characters to add is .

Function Description

Complete the minimumNumber function in the editor below.

minimumNumber has the following parameters:

int n: the length of the password
string password: the password to test
Returns

int: the minimum number of characters to add
Input Format

The first line contains an integer , the length of the password.

The second line contains the password string. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

All characters in  are in [a-z], [A-Z], [0-9], or [!@#$%^&*()-+ ].
Inputcopy	Outputcopy
3
Ab1
3
Explanation 0

She can make the password strong by adding  characters, for example, $hk, turning the password into Ab1$hk which is strong.

 characters aren't enough since the length must be at least .

Inputcopy	Outputcopy
11
#HackerRank
1
Explanation 1

The password isn't strong, but she can make it strong by adding a single digit.









#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
         int n;
         string password;
         cin >> n >> password;
         
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";  
    
    // Flags to check for character types
    bool hasDigit = false, hasLower = false, hasUpper = false, hasSpecial = false;

    // Check each character in password
    for (char c : password) {
        if (isdigit(c)) hasDigit = true;
        else if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (special_characters.find(c) != string::npos) hasSpecial = true;
    }

    // Count missing character types
    int missingTypes = !hasDigit + !hasLower + !hasUpper + !hasSpecial;

    // Ensure minimum length of 6
    int minLengthRequired = max(6 - n, missingTypes);

    cout << minLengthRequired << endl;    
       
       
      return 0;
    }
