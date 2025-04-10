We have N voting papers. The i-th vote(1≤i≤N)(1≤i≤N) has the string SiS i​
  written on it.

Print all strings that are written on the most number of votes, in lexicographical order.

Constraints
1
≤
N
≤
2
×
10
5
1≤N≤2×10 
5
 
S
i
S 
i
​
  
(
1
≤
i
≤
N
)
(1≤i≤N) are strings consisting of lowercase English letters.
The length of 
S
i
S 
i
​
  
(
1
≤
i
≤
N
)
(1≤i≤N) is between 
1
1 and 
10
10 (inclusive).
Input
Input is given from Standard Input in the following format:

N
N
S
1
S 
1
​
 
:
:
S
N
S 
N
​
 
Output
Print all strings in question in lexicographical order.

Sample 1
Inputcopy	Outputcopy
7
beat
vet
beet
bed
vet
bet
beet
beet
vet
beet and vet are written on two sheets each, while beat, bed, and bet are written on one vote each. Thus, we should print the strings beet and vet.

Sample 2
Inputcopy	Outputcopy
8
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo







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
          map<string, int> freq;
          for(int i=0; i<n; i++){
              cin >> s;
            freq[s]++;  
          }
          
          int max_freq = 0;
          for(auto entry : freq){
              max_freq=max(max_freq,entry.second);
          }
          
          for(auto entry : freq){
              if(entry.second==max_freq)
                cout<<entry.first<<endl;
          }
           
       
       //}
      return 0;
    }
