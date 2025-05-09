Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them.
The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

Input
The first input line contains integer n (1 ≤ n ≤ 100) — amount of numbers in the sequence.
The second line contains n space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

Output
If the given sequence has the second order statistics, output this order statistics, otherwise output NO.

Examples
InputCopy
4
1 2 2 -4
OutputCopy
1
InputCopy
5
1 2 3 1 1
OutputCopy
2





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
             set<int> s;
             ia(a,n);
             f(i,n) s.insert(a[i]);
             if(s.size()<2) no;
             else cout<<*next(s.begin(),1)<<endl;

        //}
      return 0;
    }
