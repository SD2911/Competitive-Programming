Polycarp plays "Game 23". Initially he has a number n and his goal is to transform it to m
. In one move, he can multiply n by 2 or multiply n by 3. He can perform any number of moves.
Print the number of moves needed to transform n to m. Print -1 if it is impossible to do so.
It is easy to prove that any way to transform n to m contains the same number of moves 
(i.e. number of moves doesn't depend on the way of transformation).
Input
The only line of the input contains two integers n and m (1≤n≤m≤5⋅108).
Output
Print the number of moves to transform n to m, or -1 if there is no solution.
Examples
InputCopy
120 51840
OutputCopy
7
InputCopy
42 42
OutputCopy
0
InputCopy
48 72
OutputCopy
-1
Note
In the first example, the possible sequence of moves is: 120→240→720→1440→4320→12960→25920→51840.
 The are 7 steps in total.
In the second example, no moves are needed. Thus, the answer is 0.
In the third example, it is impossible to transform 48 to 72.


code:
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
      //test{
          ll n,m;
          cin >> n >> m;
          if(m%n!=0){
              cout<<-1<<endl;
              return 0;
          }
          ll x = m/n;
          ll cnt = 0;
          
          while(x%2==0){
              x /= 2;
              cnt++;
          }
          
          while(x%3==0){
              x /= 3;
              cnt++;
          }
          
          if(x!=1) cout<<-1<<endl;
          else cout<<cnt<<endl;
          
     
       // }
      return 0;
    }
