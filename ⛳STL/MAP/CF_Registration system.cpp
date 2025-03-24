#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      //test{
           int n;
           cin >> n;
           map<string, int> cnt;
           for(int i=0; i<n; i++){
               string s;
               cin >> s;
               if(cnt[s]==0) cout<<"OK"<<endl;
               else cout<<s<<cnt[s]<<endl;
               cnt[s]++;
           }
       
      //} 
      return 0;
    }