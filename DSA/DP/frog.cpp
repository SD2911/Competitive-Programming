There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is h i
.
There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of ∣h i −h j
​ ∣ is incurred, where j is the stone to land on.Find the minimum possible total cost incurred before the frog reaches Stone 
N.

Constraints
All values in input are integers.2≤N≤10 5
 1≤h i
​ ≤10 4
 
Input
Input is given from Standard Input in the following format:

N
h 
1
​
  
h 
2
​
  
… 
h 
N
​
 
Output
Print the minimum possible total cost incurred.

Sample Input 1
Copy
4
10 30 40 20
Sample Output 1
Copy
30
If we follow the path 
1 → 
2 → 
4, the total cost incurred would be 
∣10−30∣+∣30−20∣=30.







// bruteforce aproach :
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N];

// TOP DOWN approach
int func(int i){
    if(i==0) return 0;
    int cost = INT_MAX;
// way 1:
   cost = min(cost,func(i-1)+abs(h[i]-h[i-1]));
// way 2:
if(i>1)
   cost = min(cost,func(i-2)+abs(h[i]-h[i-2]));
   
   return cost;
}

int main(){
     //memset(dp,-1,sizeof(dp));
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> h[i];
       cout<<func(n-1)<<endl;
       
      return 0;
    }


//dp approach :
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N];
int dp[N];

// TOP DOWN approach
int func(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost = INT_MAX;
// way 1:
   cost = min(cost,func(i-1)+abs(h[i]-h[i-1]));
// way 2:
if(i>1)
   cost = min(cost,func(i-2)+abs(h[i]-h[i-2]));
   
   return dp[i]=cost;
}

int main(){
     memset(dp,-1,sizeof(dp));
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> h[i];
       cout<<func(n-1)<<endl;
       
      return 0;
    }
