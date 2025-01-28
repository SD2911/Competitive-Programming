#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main() {
    fast
        int n,m;
        cin >> n >> m;
        vector<int> a(m);
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
     sort(a.begin(),a.end());
     int min_value = a[n-1]-a[0];
     for(int i=1; i<=m-n; i++){
 if(a[i+n-1]-a[i] < min_value) min_value=a[i+n-1]-a[i];
     }
     cout<<min_value<<endl;
    return 0;
}
 
        
      
  
