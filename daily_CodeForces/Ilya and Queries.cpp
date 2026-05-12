lya the Lion wants to help all his friends with passing exams. They need to solve the
following problem to pass the IT exam.You've got string s = s1s2... sn (n is the length of the
  string), consisting only of characters "." and "#" and m queries. Each query is described by 
a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the 
  problem.

Input
The first line contains string s of length n (2 ≤ n ≤ 105). It is guaranteed that the given 
string only consists of characters "." and "#".

The next line contains integer m (1 ≤ m ≤ 105) — the number of queries. Each of the next m 
lines contains the description of the corresponding query. The i-th line contains integers li, ri (1 ≤ li < ri ≤ n).

Output
Print m integers — the answers to the queries in the order in which they are given in the input.

Examples
InputCopy
......
4
3 4
2 3
1 6
2 6
OutputCopy
1
1
5
4
InputCopy
#..###
5
1 3
5 6
1 5
3 6
3 4
OutputCopy
1
1
2
2
0



idea:
Create a prefix array prefix[].
Traverse the string from left to right.
If adjacent characters are equal:
s[i] == s[i-1]

increase count.

Store cumulative count in prefix[i].
For each query (l, r):

Answer is:

prefix[r-1] - prefix[l-1]
Time Complexity:
O(n + m)





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
     // test{
           string s;
           cin >> s;
           int n = s.size();
           vl pre(n,0);
           for(int i=1; i<n; i++){
               pre[i] = pre[i-1];
               if(s[i]==s[i-1]) pre[i]++;
           }
           int m;
           cin >> m;
           while(m--){
               int l,r;
               cin >> l >> r;
               cout<<pre[r-1]-pre[l-1]<<endl;
           }
              
       // }
      return 0;
    }
