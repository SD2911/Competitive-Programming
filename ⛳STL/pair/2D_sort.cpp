Given n points in a two dimensional space, sort all the points in ascending order.
(x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2) 
Input
The first line consists of an integer t, the number of test cases. Then for each test case the first line consists
of an integer n, the number of points. Then the next n lines contains two integers xi, yi which represents the point.

Output
For each test case print the sorted order of the points.

Constraints
1 <= t <= 10

1 <= n <= 100000

-10^9 <= coordinates <= 10^9

NOTE: Strict time limit. Prefer scanf/printf/BufferedReader instead of cin/cout/Scanner.

Example
Inputcopy	Outputcopy
1
5
3 4
-1 2
5 -3
3 3
-1 -2

-1 2
-1 -2
3 4
3 3
5 -3




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
      test{
            int n;
            cin >> n;
           vector< pair<ll, ll>> a(n);
            
            f(i,n) { 
                cin >> a[i].first >> a[i].second;
                a[i].first *= -1;
            }
          
           
           
           sort(rall(a));
           
           f(i,n) a[i].first *= -1;
           
           
           for(auto u : a)
             cout<<u.first<<" "<<u.second<<endl;
           
            
      
       }
      return 0;
    }
