Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money.
Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the
 subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.
Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).
The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

Examples
InputCopy
6
2 2 1 3 4 1
OutputCopy
3
InputCopy
3
2 2 9
OutputCopy
3


#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main() {
    fast
        int n,o,k;
        cin >> n;
        int m_len = 1;
        int cnt = 1;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>=a[i-1]) cnt++;
            else cnt = 1;
              m_len = max(m_len,cnt);
        }
    
     cout<<m_len<<endl;
     
    return 0;
}
 
        
      
  
