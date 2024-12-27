#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
         int n;
         cin >> n;
         int sum = 0;
         vector<int> a(n);
         for(int i=1; i<n; i++){
             cin >> a[i];
           sum+=a[i];
         }
        
       cout<<(-sum)<<endl;
      
          
       }
        
      return 0;
    }
