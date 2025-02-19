#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      test{
          ll n;
          cin >> n;
          ll a[n];
          for(int i=0; i<n; i++){
              cin >> a[i];
          }
          ll oddCnt = 0;
          for(int i=0; i<n; i++){
              if(a[i]%2!=0) oddCnt++;
          }
          
          if(oddCnt%2!=0) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
     }
      return 0;
    }
