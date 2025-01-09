#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      int n,q;
      cin >> n >> q;
      vector<vector<int>> arrays(n);
      for(int i=0; i<q; i++){
          int op, t;
          cin >> op >> t;
          if(op==0){
              int x;
              cin >> x;
              arrays[t].push_back(x);
          }
          else if(op==1){
              for(size_t j=0; j<arrays[t].size();j++){
                  if(j>0) cout<<" ";
                  cout<<arrays[t][j];
              }
              cout<<endl;
          }
          else if(op==2){
              arrays[t].clear();
          }
      }
       
   return 0;    
}