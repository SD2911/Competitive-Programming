Given an array a of n elements, print any value that appears at least three times or print -1 if there is no such value.
Input
The first line contains an integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤n) — the elements of the array.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print any value that appears at least three times or print -1 if there is no such value.

Example
InputCopy
7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4
OutputCopy
-1
2
2
4
3
-1
4

#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
        int n;
        cin >> n;
        vector<int> a(n+1,0);
        int ans = -1;
        
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(++a[x]>=3) ans = x;
        }
         cout<<ans<<endl; 
       }
        
      return 0;
    }
