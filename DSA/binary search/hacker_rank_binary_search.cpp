#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
#define vl vector<ll>
#define f(i,n) for (ll i = 0; i < n; i++)
#define ia(a,n) vector<ll>a(n); f(i,n) cin>>a[i]
#define pr_array f(i,n){cout<<a[i]<<" ";}cout<<endl;
#define pauruti priority_queue<ll,vl,greater<ll>>
#define all(a) a.begin(),a.end()
#define mp map<ll,ll>
#define lp pair<ll,ll>
#define llms map<string,ll>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define pb push_back
#define lcm (a * b) / __gcd(a,b);
#define PI acos(-1)
const int mod = 1e9 + 7;
using namespace std;
int main(){
    fast
     // test{
             int n;
             cin >> n;
             ia(a,n);
             int x;
             cin >> x;
             int l = 0, r = n-1;
             while(l<r){
                 int mid = (l+r)/2;
                 if(a[mid]<x) l=mid+1;
                 else r = mid;
             }
              if(l<n&&a[l]==x) cout<<l<<endl;
              else cout<<-1<<endl;
       // }
      return 0;
    }
