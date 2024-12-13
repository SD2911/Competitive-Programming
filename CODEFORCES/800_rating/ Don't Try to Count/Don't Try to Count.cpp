#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
     test{
        ll n,m,cnt = 6,f=0,res=0;
        string x,s;
        cin >> n >> m >> x >> s;
        while(cnt--){
            if(x.find(s) != string::npos){
                f=1;
                break;
            }
            res++;
            x+=x;
        }
        if(f==1) cout<<res;
        else cout<<-1;
          cout<<endl;
          
       }
        
      return 0;
    }
