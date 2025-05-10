Two arrays of integers are given. Print the elements from the first array (in the same order like they are given in the first array), that are absent in the second array.
Input
First given number 
n
n of elements in the first array, then given 
n
n integers — the elements of array. Then given the number of elements 
m
m in the second array. Then given elements of the second array. The number of elements in each array is not greater than 
100
100. All elements are integers.

Output
Print in the first line the number of required elements. In the second line print those elements of the first array,
that are absent in the second array in the same order like in the first array.

Examples
Inputcopy	Outputcopy
7
3 1 3 4 2 4 12
6
4 15 43 1 15 1
4
3 3 2 12




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
           
           int n,m;
           cin >> n;
           ia(a,n);
           cin >> m;
           unordered_set<int> s;
           for(int i=0; i<m; i++){
               cin >> m;
               s.insert(m);
           }
           
           vl res;
           for(int num : a){
               if(s.find(num)==s.end()) res.pb(num);
           }
           
           cout<<res.size()<<endl;
           for(int num : res) cout<<num<<" ";
            cout<<endl;
         
     
        //}
      return 0;
    }
