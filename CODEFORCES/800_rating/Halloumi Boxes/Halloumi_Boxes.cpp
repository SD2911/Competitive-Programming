#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        test{
           int n,k;
           cin >> n >> k;
           vector<int> a(n);
           for(int i=0; i<n; i++){
               cin >> a[i];
           }
if(is_sorted(a.begin(),a.end())||k>1)
        cout<<"YES"<<endl;
else cout<<"NO"<<endl;

        }

        return 0;
    }
