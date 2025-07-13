There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is h i​ .

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone 
N:

If the frog is currently on Stone i, jump to one of the following: Stone 
i+1,i+2,…,i+K. Here, a cost of ∣h i​ −h j​ ∣ is incurred, where j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches Stone 
N.

Constraints
All values in input are integers.
2≤N≤10 
5
 
1≤K≤100
1≤h 
i
​
 ≤10 
4
 
Input
Input is given from Standard Input in the following format:

N 
K
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
5 3
10 30 40 50 20
Sample Output 1
Copy
30
If we follow the path 
1 → 
2 → 
5, the total cost incurred would be 
∣10−30∣+∣30−20∣=30.






#include <bits/stdc++.h>
using namespace std;
int n,h[100005],vis[100005],dp[100005];


int solve(int ind)
  { 
     if(ind==n) return 0;
     if(vis[ind]) return dp[ind];
     int res = INT_MAX;
     // i~i+1 
     int cost = abs(h[ind]-h[ind+1]);
     int now = cost + solve(ind+1);
     res = min(res,now);
     
     if(ind+2<=n){
     // i~i+2
      cost = abs(h[ind]-h[ind+2]);
     now = cost + solve(ind+2);
     res = min(res,now);
     }
     vis[ind] = 1;
     dp[ind] = res;
      return res;
  }

int main(){
   // fast
      //test{
              cin >> n;
        for(int i=0; i<=n; i++) cin >> h[i];
        int ans = solve(1);
        cout<<ans<<endl;
       // }
      return 0;
    }

