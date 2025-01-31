Nikita had a word consisting of exactly 3 lowercase Latin letters. The letters in the Latin alphabet are numbered from 1 to 26
, where the letter "a" has the index 1, and the letter "z" has the index 26.

He encoded this word as the sum of the positions of all the characters in the alphabet. For example, the word "cat" he would encode as the integer 3+1+20=24, because the letter "c" has the index 3
 in the alphabet, the letter "a" has the index 1, and the letter "t" has the index 20.

However, this encoding turned out to be ambiguous! For example, when encoding the word "ava", the integer 1+22+1=24 is also obtained.

Determine the lexicographically smallest word of 3 letters that could have been encoded.

A string a is lexicographically smaller than a string b if and only if one of the following holds:

a is a prefix of b, but a≠b;in the first position where a and b differ, the string a
 has a letter that appears earlier in the alphabet than the corresponding letter in b
.
Input
The first line of the input contains a single integer t (1≤t≤100) — the number of test cases in the test.

This is followed by the descriptions of the test cases.

The first and only line of each test case contains an integer n (3≤n≤78) — the encoded word.

Output
For each test case, output the lexicographically smallest three-letter word that could have been encoded on a separate line.

Example
InputCopy
5
24
70
3
55
48
OutputCopy
aav
rzz
aaa
czz
auz






☠️
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
        test{
            int n, sz = 26;
            cin >> n;
            
   //mins = "zzz": Initially, the lexicographically smallest valid string is set to "zzz" (a string consisting of 'z', which is the largest character lexicographically).
   
 //cur: This will store the current candidate string as the program generates it.
 
            string mins = "zzz", cur;
for(int i=0; i<sz; i++){
    for(int j=0; j<sz; j++){
        for(int k=0; k<sz; k++){
    

//This checks if the sum of the indices i + j + k plus 3 (since the alphabet indices start from 0, but the problem statement seems to assume 1-based indexing) equals n. This condition is used to ensure that the sum of the positions of the three selected characters matches the given number n.
//If this condition is true, we proceed to generate a valid string.       
               if(i+j+k+3==n){
                   
 //cur += char(i + 'a');:

//Converts the index i to a character by adding it to the ASCII value of 'a'. This gives the corresponding character ('a' + i).                  
                   cur+=char(i+'a');
                   cur+=char(j+'a');
                   cur+=char(k+'a');
                   
 //  After generating the string cur, it compares the current string cur with the previously found lexicographically smallest string (mins). If cur is lexicographically smaller than mins, mins is updated to cur.
 
                   mins = min(cur, mins);
               }         
                    }
                }
            }
       cout<<mins<<endl;   
      
        }   
      return 0;
    }
