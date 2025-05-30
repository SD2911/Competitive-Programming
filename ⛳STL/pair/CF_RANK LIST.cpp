Another programming contest is over. You got hold of the contest's final results table. The table has the following data. For each team we are shown two numbers: the number of problems and the total penalty time. However, for no team we are shown its final place.

You know the rules of comparing the results of two given teams very well. Let's say that team a solved pa problems with total penalty time ta and team b solved pb problems with total penalty time tb. Team a gets a higher place than team b in the end,
if it either solved more problems on the contest, or solved the same number of problems but in less total time. In other words, team a gets a higher place than team b in the final results' table if either pa > pb, or pa = pb and ta < tb.

It is considered that the teams that solve the same number of problems with the same penalty time share all corresponding places. More formally, let's say there is a group of x teams that solved the same number of problems with the same penalty time.
Let's also say that y teams performed better than the teams from this group. In this case all teams from the group share places y + 1, y + 2, ..., y + x. The teams that performed worse than the teams from this group, get their places in the results table starting from the y + x + 1-th place.

Your task is to count what number of teams from the given list shared the k-th place.

Input
The first line contains two integers n and k (1 ≤ k ≤ n ≤ 50). Then n lines contain the description of the teams: the i-th line contains two integers pi and ti (1 ≤ pi, ti ≤ 50)
— the number of solved problems and the total penalty time of the i-th team, correspondingly. All numbers in the lines are separated by spaces.

Output
In the only line print the sought number of teams that got the k-th place in the final results' table.

Examples
InputCopy
7 2
4 10
4 10
4 10
3 20
2 1
2 1
1 10
OutputCopy
3
InputCopy
5 4
3 1
3 1
5 3
3 1
3 1
OutputCopy
4
Note
The final results' table for the first sample is:

1-3 places — 4 solved problems, the penalty time equals 10
4 place — 3 solved problems, the penalty time equals 20
5-6 places — 2 solved problems, the penalty time equals 1
7 place — 1 solved problem, the penalty time equals 10
The table shows that the second place is shared by the teams that solved 4 problems with penalty time 10. There are 3 such teams.

The final table for the second sample is:

1 place — 5 solved problems, the penalty time equals 3
2-5 places — 3 solved problems, the penalty time equals 1
The table shows that the fourth place is shared by the teams that solved 3 problems with penalty time 1. There are 4 such teams.





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
//call comparator
bool cmp(const pair<int,int>&p1, const pair<int,int>&p2) 
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    return 0;
}
int main(){
    fast
       //test{
          int n,k;
          cin >> n >> k;
            vector<pair<int,int>> a(n);
         f(i,n)  cin >> a[i].first >> a[i].second;
        
        int cnt = 0;    
        sort(all(a),cmp);
        for(auto u : a){
            if(u==a[k-1]) cnt++;
        }
       
        cout<<cnt<<endl;    
      
       // }
      return 0;
    }
