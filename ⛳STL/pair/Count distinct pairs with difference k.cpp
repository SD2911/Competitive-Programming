Given an integer array of size n and a non-negative integer k,
count all distinct pairs with a difference equal to k, i.e., A[ i ] - A[ j ] = k.
 
Example 1:
Input: array = {1, 5, 4, 1, 2}, k = 0
Output: 1
Explanation: There is only one pair (1, 1) whose difference equal to 0.
Example 2;
Input: array = {1, 5, 3}, k = 2
Output: 2
Explanation: There are two pairs (5, 3) and (1, 3) whose difference equal to 2.





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
            int n,k;
            cin >> n;
            ia(a,n);
            cin >> k;
            vector<pair<int,int>> v;
     f(i,n){
        for(int j=0; j<n; j++){
         if(i!=j && a[i]-a[j]==k) v.pb({a[i],a[j]}); 
                }
            }
       
      
       int sz = (v.begin(),v.end())-v.begin();
       
       cout<<sz<<endl;
       
            
      
        }
      return 0;
    }
