#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      test{
           ll a,b,c;
           cin >> a >> b >> c;
           
           if(c%2!=0){
               if(b>a) cout<<"Second"<<endl;
               else cout<<"First"<<endl;
           }
           else {
               if(a>b) cout<<"First"<<endl;
               else cout<<"Second"<<endl;
           }
           
     }
      return 0;
    }
