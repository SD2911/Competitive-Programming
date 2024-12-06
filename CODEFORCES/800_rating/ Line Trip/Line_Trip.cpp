#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        test{
           int n,k;
           cin >> n >> k;
           int prev=0, ans = 0;
           vector<int> a(n);
           for(int i=0; i<n; i++){
               cin >> a[i];
                ans = max(ans, a[i]-prev);
                  prev = a[i];
           }
      ans = max(ans, 2*(k-prev));
      cout<<ans<<endl;
    
           
        }
       
        return 0;
    }
