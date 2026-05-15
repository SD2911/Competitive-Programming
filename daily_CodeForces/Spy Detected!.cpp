You are given an array a consisting of n (n≥3) positive integers. It is known that in this
array, all the numbers except one are the same(for example, in the array [4,11,4,4]
 all numbers except one are equal to 4).
Print the index of the element that does not equal others. The numbers in the array are
numbered from one.

Input
The first line contains a single integer t (1≤t≤100). Then t test cases follow.
The first line of each test case contains a single integer n (3≤n≤100) — the length of the array a
.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤100).
It is guaranteed that all the numbers except one in the a array are the same.

Output
For each test case, output a single integer — the index of the element that is not equal
to others.

Example
InputCopy
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10
OutputCopy
2
1
5
3



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
      test{
           int n;
           cin >> n;
           ia(a,n);
           map<int, int> cnt;
           f(i,n) cnt[a[i]]++;
           int ans;
           for(auto u:cnt){
               if(u.second==1) ans = u.first;
           }
    f(i,n){
        if(a[i]==ans){
            cout<<i+1<<endl;
            break;
        }
    }
           
        }
      return 0;
    }
