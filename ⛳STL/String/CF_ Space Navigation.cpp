You were dreaming that you are traveling to a planet named Planetforces on your personal spaceship. Unfortunately, its piloting system was corrupted and now you need to fix it in order to reach Planetforces.
Space can be represented as the XY plane. You are starting at point (0,0), and Planetforces is located in point (px,py).

The piloting system of your spaceship follows its list of orders which can be represented as a string s. The system reads s
 from left to right. Suppose you are at point (x,y) and current order is si:

if si=U, you move to (x,y+1);if si=D, you move to (x,y−1);if si=R, you move to (x+1,y);if si=L, you move to (x−1,y)
.
Since string s could be corrupted, there is a possibility that you won't reach Planetforces in the end. Fortunately, you can delete some orders from s but you can't change their positions.

Can you delete several orders (possibly, zero) from s in such a way, that you'll reach Planetforces after the system processes all orders?

Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.

Each test case consists of two lines. The first line in each test case contains two integers px and py
 (−105≤px,py≤105; (px,py)≠(0,0)) — the coordinates of Planetforces (px,py).

The second line contains the string s (1≤|s|≤105: |s| is the length of string s) — the list of orders.

It is guaranteed that the sum of |s| over all test cases does not exceed 105.

Output
For each test case, print "YES" if you can delete several orders (possibly, zero) from s
 in such a way, that you'll reach Planetforces. Otherwise, print "NO". You can print each letter in any case (upper or lower).

Example
InputCopy
6
10 5
RRRRRRRRRRUUUUU
1 1
UDDDRLLL
-3 -5
LDLDLDDDR
1 2
LLLLUU
3 -2
RDULRLLDR
-1 6
RUDURUUUUR
OutputCopy
YES
YES
YES
NO
YES
NO






#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     test{
        int x,y;
        cin >> x >> y;
        
        string s;
        cin >> s;
        
      int u=0, d=0, l=0, r=0;
      for(int i=0; i<s.length(); i++){
          if(s[i]=='U') u++;
          else if(s[i]=='R') r++;
          else if(s[i]=='D') d++;
          else l++;
      }
      
      
      if(x>0 && r>=x) x=0;
      if(x<0 && l>=-x) x=0;
      if(y>0 && u>=y) y=0;
      if(y<0 && d>=-y) y=0;
      
     if(!x && !y) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
      
          
       }
        
      return 0;
    }
