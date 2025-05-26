Jesse loves cookies and wants the sweetness of some cookies to be greater than value . To do this, two cookies with the least sweetness are repeatedly mixed. This creates a special combined cookie with:

sweetness  Least sweet cookie   2nd least sweet cookie).

This occurs until all the cookies have a sweetness .

Given the sweetness of a number of cookies, determine the minimum number of operations required. If it is not possible, return .






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
         int n,k;
         cin >> n >> k;
         pauruti q;
         f(i,n){
            int x;
             cin >> x;
             q.push(x);
         }
         int cnt = 0;
         while(q.size()>=2){
             if(q.top()>=k) break;
             
             int a = q.top();
             q.pop();
             
             int b = q.top();
             q.pop();
             
             q.push(1ll*a+2LL*b);
             cnt++;
         }
         
         if(q.top()>=k) cout<<cnt<<endl;
         else cout<<-1<<endl;
        
     
       //}
      return 0;
    }
