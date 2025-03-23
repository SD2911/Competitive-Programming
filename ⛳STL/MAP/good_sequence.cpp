#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     //test{
           map<int,int> cnt;
           int n;
           cin >> n;
           for(int i=1; i<=n; i++){
               int a;
               cin >> a;
               cnt[a]++;
           }
           
           int remove = 0;
           
           for(auto u:cnt){
               if(u.second>=u.first) remove+=(u.second-u.first);
               else remove+=u.second;
           }
          cout<<remove<<endl;
          
      // }
        
      return 0;
    }
