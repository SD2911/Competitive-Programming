#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main() {
    fast
        int m;
        cin >> m;
        vector<int> a(m);
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
     sort(a.begin(),a.end());
    int day = 1, cnt = 0;
    for(int i=0; i<m; i++){
        if(a[i]>=day){
            cnt++;
            day++;
            
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}
 
        
      
  
