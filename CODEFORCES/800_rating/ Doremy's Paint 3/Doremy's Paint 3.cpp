#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast{ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    test{
    int n;
    cin >> n;
    map<int,int> mp;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
         mp[a[i]]++;
    }
   if(mp.size()==1) cout<<"YES"<<endl;
   else if(mp.size()>=3) cout<<"NO"<<endl;
   else{
       vector<int> a1;
       for(auto it:mp){
           a1.push_back(it.second);
       }
       int diff = abs(a1[0]-a1[1]);
       if(diff<=1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   
}
      return 0;
    }
