You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?
Input
The only input line has an integer n.
Output
Print one integer: the minimum number of steps.
Constraints

1 \le n \le 10^6

Example
Input:
27

Output:
5

Explanation: An optimal solution is 27 \rightarrow 20 \rightarrow 18 \rightarrow 10 \rightarrow 9 \rightarrow 0.









#include <bits/stdc++.h>
using namespace std;
int n,vis[10000005], dp[10000005];


int solve(int m)
  { 
    if(m==0) return 0;
    if(vis[m]) return dp[m];
    
    int res = INT_MAX;
    int m2 = m;
    while(m2>0){
        int digit = m2%10;
        if(digit!=0) {
         res = min(res,1+solve(m-digit));
        }
        m2 /= 10;
    }
    vis[m] = 1;
    dp[m] = res;
        return res;   
  }

int main(){
   // fast
      //test{
      cin >> n;
       int ans = solve(n);
       cout<<ans<<endl;
       // }
      return 0;
    }
