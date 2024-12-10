#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast{ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    test{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
     if(a[0]==1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   
}
      return 0;
    }
