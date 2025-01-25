#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
        int n;
        cin >> n;
        vector<int> a(n+1,0);
        int ans = -1;
        
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(++a[x]>=3) ans = x;
        }
         cout<<ans<<endl; 
       }
        
      return 0;
    }
