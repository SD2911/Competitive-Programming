
Given an array of size n, you need to reduce the array. In one step, remove any two elements from the array and add their sum instead.
Continue addition and removal until no further reduction possible. Output the minimum cost of reduction possible for the given array. 

Input
First line contains a positive integer T representing number of test cases.

Next line contains a number n denoting the size of array.

Next line contains N space separated positive integers (A[i])

1 ≤ T ≤ 50

1 ≤ n ≤ 106

1 ≤ A[i] ≤ 106

Output
Output minimum cost of reduction.

Example
Input:
2
4
1 6 3 20
3
2 2 2

Output:
44
10





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
      ia(a,n);
      
priority_queue<ll,vl,greater<ll>> q;
        
       f(i,n){
           q.push(a[i]); //20 6 3 1
          // q = q*(-1); // -1 -3 -6 -20
       } 
       
       ll ans = 0;
       ll cost = 0;
       
         while(q.size()>1){
             //int x = abs(q.top());
             int a1 = q.top();
             q.pop();
             
             int a2 = q.top();
             q.pop();
             
             ans = a1 + a2;
             cost += ans;
             
             q.push(ans);
             
         }
         
         cout<<cost<<endl;
         
     
       }
      return 0;
    }
