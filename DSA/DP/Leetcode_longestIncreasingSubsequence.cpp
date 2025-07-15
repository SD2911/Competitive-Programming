// bruteforces method:
#include <bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
vector<int> a(N);
int solve(int i)
  { 
      int ans = 1;
      for(int j=0; j<i; j++){   
          if(a[i]>a[j]) ans=max(ans,solve(j)+1);
      }
      return ans;
  }

int main(){
    //fast
     // test{
          int n;
          cin >> n;
          for(int i=0; i<=n; i++) cin >> a[i];
          int ans = 0;
          for(int i=0;i<n;i++) ans=max(ans,solve(i));
          cout<<ans;
       // }
      return 0;
    }







//DP method:
#include <bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
vector<int> a(N);
int dp[N];
int solve(int i)
  { 
      if(dp[i]!=-1) return dp[i];
      int ans = 1;
      for(int j=0; j<i; j++){   
          if(a[i]>a[j]) ans=max(ans,solve(j)+1);
      }
      return dp[i] = ans;
  }

int main(){
    //fast
     // test{
     memset(dp,-1,sizeof(dp));
          int n;
          cin >> n;
          for(int i=0; i<=n; i++) cin >> a[i];
          int ans = 0;
          for(int i=0;i<n;i++) ans=max(ans,solve(i));
          cout<<ans;
       // }
      return 0;
    }
