The Monk learned about priority queues recently and asked his teacher for an interesting problem.
  So his teacher came up with a simple problem. He now has an integer array A. For each index i, he wants to find the product of the largest, second largest and the third largest integer in the range [1,i].
Note: Two numbers can be the same value-wise but they should be distinct index-wise.

Input:
The first line contains an integer N, denoting the number of elements in the array A.
The next line contains N space separated integers, each denoting the ith integer of the array A.

Output:
Print the answer for each index in each line. If there is no second largest or third largest number in the array A upto that index, then print "-1", without the quotes.

Constraints:
1 <= N <= 100000
0 <= A[i] <= 1000000

Sample Input
5
1 2 3 4 5
Sample Output
-1
-1
6
24
60






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
      ia(a,n);
      
        priority_queue<int> q;
        
       f(i,n){
           q.push(a[i]);
           if(q.size()>=3){
               int a1 = q.top();
               q.pop();
               
                int a2 = q.top();
               q.pop();
               
                int a3 = q.top();
               q.pop();
               
               cout<<(ll)(a1*a2*a3)<<endl;
               
               q.push(a1);
               q.push(a2);
               q.push(a3);
           }
           
           else cout<<-1<<endl;
           
           
       } 
         
     
       // }
      return 0;
    }
