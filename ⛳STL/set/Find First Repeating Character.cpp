Given a string of characters, find the first repeating character.

Input Format
First line of input contains T - number of test cases. Its followed by T lines, each line contains a single string of characters.

Constraints
1 <= T <= 1000
'a' <= str[i] <= 'z'
1 <= len(str) <= 104

Output Format
For each test case, print the first repeating character, separated by newline. If there are none, print '.'.

Inputcopy	Outputcopy
4
datastructures
algorithms
smartinterviews
hackerrank
a
.
s
a





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
          
          set<char> seen; 
          string s;
          cin >> s;
          bool found = false;
    
    //If it's already in the set → it's the first repeating character, print it.
    //If not, add it to the set.
          for(char c : s){
              if(seen.find(c)!=seen.end()){
                  cout<<c<<endl;
                  found = true;
                  break;
              }
              seen.insert(c);
          }
    if(!found) cout<<"."<<endl;     
         

        }
      return 0;
    }
