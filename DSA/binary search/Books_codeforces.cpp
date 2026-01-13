When Valera has got some free time, he goes to the library to read some books. 
  Today he's got t free minutes to read. That's why Valera took n books in the library
  and for each book he estimated the time he is going to need to read it. Let's number 
the books by integers from 1 to n. Valera needs ai minutes to read the i-th book.

Valera decided to choose an arbitrary book with number i and read the books one by one,
starting from this book. In other words, he will first read book number i, then book number i + 1,
  then book number i + 2 and so on. He continues the process until he either runs out of
the free time or finishes reading the n-th book. Valera reads each book up to the end, that is,
  he doesn't start reading the book if he doesn't have enough free time to finish reading it.

Print the maximum number of books Valera can read.

Input
The first line contains two integers n and t (1 ≤ n ≤ 105; 1 ≤ t ≤ 109) — the number of books and the number of free minutes Valera's got. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 104), where number ai shows the number of minutes that the boy needs to read the i-th book.

Output
Print a single integer — the maximum number of books Valera can read.

Examples
InputCopy
4 5
3 1 2 1
OutputCopy
3
InputCopy
3 3
2 2 3
OutputCopy
1




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
            ll n,x;
            cin >> n >> x;
            ia(a,n);
          int total = 0, cnt = 0, mx = 0, ptr = 0;
          f(i,n){
              total += a[i];
              cnt++;
              if(total <= x) mx = max(cnt,mx);
              else{
                  while(total>x){
                      total -= a[ptr++];
                      cnt--;
                  }
              }
          }
          
           cout<<mx<<endl;
     
       // }
      return 0;
    }
