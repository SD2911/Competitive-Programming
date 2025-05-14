The first line contains the number 
n
 
(
1
≤
n
≤
100
)
n (1≤n≤100), followed by 
n
n moments of time. Each moment of time is specified by three integers: hours (from 
0
0 to 
23
23), minutes (from 
0
0 to 
60
60) and seconds (from 
0
0 to 
60
60).

Output
Print the moments of time sorted in non-decreasing order. Each moment of time should be displayed as three integers, without leading zeros.

Examples
Inputcopy	Outputcopy
4
10 20 30
7 30 00
23 59 59
13 30 30
7 30 0
10 20 30
13 30 30
23 59 59









#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
#define vl vector<ll>
#define f(i,n) for (ll i = 0; i < n; i++)
#define ia(a,n) vector<ll>a(n); f(i,n) cin>>a[i]
#define pr_array f(i,n){cout<<a[i]<<" ";}cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
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
      //test{
            int n;
            cin >> n;
           vector<pair<pair<int,int>,int>> p(n);
           f(i,n){
               int a,b,c;
               cin >> a >> b >> c;
               p.pb({{a,b},c});
           }
           
           sort(p.begin(),p.end());
           for(int a=n; a<n*2; a++)
            cout<<p[a].first.first<<" "<<p[a].first.second<<" "<<p[a].second<<" "<<endl;
            
      
       //}
      return 0;
    }
