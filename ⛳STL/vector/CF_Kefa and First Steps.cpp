#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main() {
    fast
        int n,o,k;
        cin >> n;
        int m_len = 1;
        int cnt = 1;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>=a[i-1]) cnt++;
            else cnt = 1;
              m_len = max(m_len,cnt);
        }
    
     cout<<m_len<<endl;
     
    return 0;
}
 
        
      
  