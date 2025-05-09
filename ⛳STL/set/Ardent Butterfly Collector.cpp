As you know, Andry Sergeevich is an ardent collector of butterflies. He has a huge collection, the exhibits of which are collected from around the world. We assume that there are 2 * 10^9 species of butterflies in the world.
In order not to get confused, Andrei Sergeevich assigned a unique number to each species. Butterfly numbering always starts from one. Now he wants to know if there is a butterfly with a number k in his collection, or he will have to get it, spending a lot of effort and money.

Input
First line contains the number of species of butterflies n (1 ≤ n ≤ 10^5) in the collection of Andrei Sergeevich. Next line contains n numbers in ascending order - the numbers of butterfly species in the collection.
All kinds of butterflies in the collection have different numbers.

Third line contains the number of species of butterflies m (1 ≤ m ≤ 10^5), about which Andrei Sergeevich wants to know if he has them in the collection or not. The last line contains m numbers - numbers of species of butterflies, the presence of which must be checked.

Output
Print m lines. For each query print "YES", if the butterfly with the given number exists in his collection and "NO" otherwise.

Examples
Inputcopy	Outputcopy
7
10 47 50 63 89 90 99
4
84 33 10 82
NO
NO
YES
NO






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
           
           set<int> s;  
           int n;
           cin >> n;
           ia(a,n);
           int m;
           cin >> m;
           vl b(m);
           for(int i=0; i<m; i++) cin >> b[i];
          f(i,n) s.insert(a[i]);
          
          for(int i=0; i<m; i++){
              if(s.count(b[i])==1) yes;
              else no;
          }
          
             

        //}
      return 0;
    }
