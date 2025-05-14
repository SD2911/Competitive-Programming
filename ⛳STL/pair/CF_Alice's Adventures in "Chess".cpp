Alice is trying to meet up with the Red Queen in the countryside! Right now, Alice is at position (0,0), and the Red Queen is at position (a,b)
. Alice can only move in the four cardinal directions (north, east, south, west).

More formally, if Alice is at the point (x,y), she will do one of the following:

go north (represented by N), moving to (x,y+1);
go east (represented by E), moving to (x+1,y);
go south (represented by S), moving to (x,y−1); or
go west (represented by W), moving to (x−1,y)
.
Alice's movements are predetermined. She has a string s
 representing a sequence of moves that she performs from left to right. Once she reaches the end of the sequence, she repeats the same pattern of moves forever.

Can you help Alice figure out if she will ever meet the Red Queen?

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The first line of each test case contains three integers n, a, b (1≤n, a, b≤10) — the length of the string and the initial coordinates of the Red Queen.

The second line contains a string s of length n consisting only of the characters N, E, S, or W.

Output
For each test case, output a single string "YES" or "NO" (without the quotes) denoting whether Alice will eventually meet the Red Queen.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
6
2 2 2
NE
3 2 2
NNE
6 2 1
NNEESW
6 10 10
NNEESW
3 4 2
NEE
4 5 5
NEWS
OutputCopy
YES
NO
YES
YES
YES
NO






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
            pair<int, int> p;
            int a,b;
            cin >> a >> b;
            p = {a,b};
            string s;
            cin >> s;
            bool ok = false;
            int x=0,y=0;
            for(int i=0; i<250; i++){
                for(int j=0; j<n; j++){
                    if(s[j]=='N') y+=1;
                    else if(s[j]=='E') x+=1;
                    else if(s[j]=='W') x-=1;
                    else if(s[j]=='S') y-=1;
              
              if(p.first==x && p.second==y){
                  ok = true;
                  break;
              }      
                }
            }
            
            if(ok) yes;
            else no;
      
       }
      return 0;
    }
