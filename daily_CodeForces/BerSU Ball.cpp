The Berland State University is hosting a ballroom dance in celebration of its 100500-th 
  anniversary! n boys and m girls are already busy rehearsing waltz, minuet, polonaise and 
quadrille moves.
We know that several boy&girl pairs are going to be invited to the ball. However, the partners' 
dancing skill in each pair must differ by at most one.
For each boy, we know his dancing skills. Similarly, for each girl we know her dancing skills. 
Write a code that can determine the largest possible number of pairs that can be formed from n boys and m girls.
Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of boys. The second line contains
sequence a1, a2, ..., an (1 ≤ ai ≤ 100), where ai is the i-th boy's dancing skill.

Similarly, the third line contains an integer m (1 ≤ m ≤ 100) — the number of girls. 
The fourth line contains sequence b1, b2, ..., bm (1 ≤ bj ≤ 100), where bj is the j-th girl's dancing skill.

Output
Print a single number — the required maximum possible number of pairs.

Examples
InputCopy
4
1 4 6 2
5
5 1 5 7 9
OutputCopy
3
InputCopy
4
1 2 3 4
4
10 11 12 13
OutputCopy
0
InputCopy
5
1 1 1 1 1
3
1 2 3
OutputCopy
2


🍕method:
After sorting:
try to pair the smallest possible boy and girl
if difference ≤ 1 → make pair
otherwise move the smaller one
This is a classic two pointers greedy problem.

☠️code:
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
             int n;
             cin >> n;
             ia(a,n);
             int m;
             cin >> m;
             vl b(m);
             f(j,m) cin >> b[j];
          sort(all(a));
          sort(all(b));
          
          int i=0, j=0, ans = 0;
          while(i<n && j<m){
              if(abs(a[i]-b[j])<=1) ans++,i++,j++;
              else if(a[i]<b[j]) i++;
              else j++;
          }
              cout<<ans<<endl;
     
        //}
      return 0;
    }
