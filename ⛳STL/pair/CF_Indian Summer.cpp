Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouquet from fallen leaves. Alyona is very choosy — 
she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of leaves Alyona has found. The next n lines contain the leaves' descriptions.
Each leaf is characterized by the species of the tree it has fallen from and by the color. The species of the trees and colors are given in names,
consisting of no more than 10 lowercase Latin letters. A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.

Output
Output the single number — the number of Alyona's leaves.

Examples
InputCopy
5
birch yellow
maple red
birch yellow
maple yellow
maple green
OutputCopy
4





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
       vector<pair<string, string>> a(n);
       f(i,n) cin >> a[i].first >> a[i].second;
       sort(all(a));
       
       //for unique element:
       int length = unique(all(a))-a.begin();
       //here "length" is the size of unique array
      
     
       cout<<length<<endl;     
        
      
        //}
      return 0;
    }

InputCopy
3
oak yellow
oak yellow
oak yellow
OutputCopy
1
