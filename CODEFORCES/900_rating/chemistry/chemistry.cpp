#include <bits/stdc++.h>
#define test int t=1; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
          int n,k;
          cin >> n >> k;
          string s;
          cin >> s;
    map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto it:mp){
        if(it.second%2!=0) cnt++;
    }
    
    if(cnt-1<0) cnt=0;
    else cnt=cnt-1;
    
    if(k>=cnt && k<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
       }
     
      return 0;
    }
