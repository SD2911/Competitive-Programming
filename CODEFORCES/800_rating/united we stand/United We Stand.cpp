#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      test{
          ll n;
          cin >> n;
          vector<ll> a(n);
          for(int i=0; i<n; i++){
              cin >> a[i];
        }
        
        ll mx = *max_element(a.begin(),a.end());
        vector<ll> b,c;
        for(int i=0; i<n; i++){
    //i want to push back all maximum element in array c rather tha n array b.        
            if(a[i]!=mx) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        
        if(b.size()==0) //all elements are same
              cout<<-1<<endl;
       
       else {
           cout<<b.size()<<" "<<c.size()<<endl;
           for(auto it:b)
               cout<<it<<" ";
               cout<<endl;
           for(auto it:c)
               cout<<it<<" ";
               cout<<endl;
              
       }       
          
     }
      return 0;
    }
