#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int dp[N];

// TOP DOWN approach
int func(int n){
    if(n==0) return 0;
    if(n==1) return 1;
   if(dp[n]!=-1) return dp[n];
   return dp[n] = func(n-1) + func(n-2);
}
int main(){
     memset(dp,-1,sizeof(dp));
        int n;
        cin >> n;
        cout<<func(n);
       
       
      return 0;
    }
