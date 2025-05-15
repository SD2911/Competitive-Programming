There are n people, each has a name, a surname and a year of birth. Sort them first lexicographically by surname, then by name. If there are several people with the same surname and name, then arrange them in descending order of their year of birth.

Input
The first line contains the number of people 
n
 
(
1
≤
n
≤
100
)
n (1≤n≤100). Each of the next 
n
n lines contains name, surname and year of birth of one person. Name and surname contain no more that 
20
20 characters.

Output
Print the data about people according to the sorting condition.

Examples
Inputcopy	Outputcopy
6
Mila Catron 1977
Ivan Mendel 1956
Mihail Egorov 1980
Eric Catron 1977
Mihail Egorov 1988
Petr Mendel 1990
Eric Catron 1977
Mila Catron 1977
Mihail Egorov 1988
Mihail Egorov 1980
Ivan Mendel 1956
Petr Mendel 1990








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
bool cmp(pair<pair<string,string>,ll>p1,pair<pair<string,string>,ll>p2){
    if(p1.first.first==p2.first.first&&p1.first.second==p2.first.second) return p1.second > p2.second;
    if(p1.first.second!=p2.first.second) return p1.first.second<p2.first.second;
    if(p1.first.second==p2.first.second) return p1.first.first < p2.first.first;
}
int main(){
    fast
      //test{
           int n;
           cin >> n;
        vector<pair<pair<string,string>,ll>> v(n);
        f(i,n)
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto u : v){
            cout<<u.first.first<<" "<<u.first.second<<" "<<u.second<<" "<<endl;
        }
           
            
      
       //}
      return 0;
    }
