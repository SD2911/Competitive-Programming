#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast{ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    test{
   int n;
   cin >> n;
   string s;
   cin >> s;
   int ans = 0, cnt =0;
   for(int i=0;i<n;i++){
       if(s[i]=='.'){
           cnt++;
           ans++;
       }
       else cnt = 0;
       if(cnt>=3) break;
   }
   if(cnt >= 3) cout<<2<<endl;
   else cout<<ans<<endl;


}
      return 0;
    }
