#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
       int n;
       cin >> n;
    vector<int> a(n);
     for(int i=0; i<n; i++) cin >> a[i];
   int op = 1e9;
    for(int i=0; i<n; i++){
        op = min(op, abs(a[i]-0));
    }
    
     cout<<op<<endl;
     return 0;
       
    }
