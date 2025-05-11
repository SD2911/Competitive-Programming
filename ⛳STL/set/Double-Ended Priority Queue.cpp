Given a multiset S={S1...,N}
S={S 
1
​
 ,…,S 
N
​
 }. Process the following 
Q
Q queries in order:

0 x: Add 
x
x to 
S
S.
1: Output one of the minimum elements in 
S
S and remove it from 
S
S.
2: Output one of the maximum elements in 
S
S and remove it from 
S
S.
It is guaranteed that 
S
S is not empty when processing queries of types 1 and 2.

Constraints
0
≤
N
≤
5
×
1
0
5
0≤N≤5×10 
5
 
1
≤
Q
≤
5
×
1
0
5
1≤Q≤5×10 
5
 
−
1
×
1
0
9
≤
S
i
,
x
≤
1
0
9
−1×10 
9
 ≤S 
i
​
 ,x≤10 
9
 
Input
N
Q
NQ
S
1
⋯
S
N
S 
1
​
 ⋯S 
N
​
 
Q
u
e
r
y
0
Query 
0
​
 
⋮
⋮
Q
u
e
r
y
Q
−
1
Query 
Q−1
​
 
Sample

Inputcopy	Outputcopy
4 10
-3 0 1 3
0 3
2
2
0 -2
0 1
1
1
2
1
2
3
3
-3
-2
1
0
1








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
             multiset<int> s;
             int n;
             cin >> n;
             
             int q;
             cin >> q;
             
             ia(a,n);
             f(i,n) s.insert(a[i]);
             
             while(q--){
                 
                 int x;
                 cin >> x;
               
               if(x==0){
                   int c;
                   cin >> c;
                   s.insert(c);
               }
               
               else if(x==1){
                   cout<< *s.begin() << endl;
                   s.erase(s.begin());
                   
               }
               
               else {
                   auto it = s.end();
                   --it;
                   cout<< *it << endl;
                   s.erase(it);
               }
                 
                 
             }
     
        //}
      return 0;
    }
