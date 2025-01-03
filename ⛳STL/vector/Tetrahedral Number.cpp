You are given an integer �N.
Print all triples of non-negative integers (�,�,�)(x,y,z) such that �+�+�≤�x+y+z≤N in ascending lexicographical order.
What is lexicographical order for non-negative integer triples?
A triple of non-negative integers (�,�,�)(x,y,z) is said to be lexicographically smaller than (
�′,�′,�′)(x ′ ,y ′ ,z ′ ) if and only if one of the following holds:
�<�′x<x ′ ;�=�′x=x ′  and �<�′y<y ′ ;�=�′x=x ′  and �=�′y=y ′  and �<�′z<z ′ .Constraints0≤
�≤21 0≤N≤21�N is an integer.
Input
The input is given from Standard Input in the following format:
�N Output Print all triples of non-negative integers (�,�,�) (x,y,z) such that 
�+�+�≤� x+y+z≤N in ascending lexicographical order, with �,�,�
x,y,z separated by spaces, one triple per line.

Sample 1
Inputcopy	
3
Outputcopy  
0 0 0
0 0 1
0 0 2
0 0 3
0 1 0
0 1 1
0 1 2
0 2 0
0 2 1
0 3 0
1 0 0
1 0 1
1 0 2
1 1 0
1 1 1
1 2 0
2 0 0
2 0 1
2 1 0
3 0 0


⛳
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
       int n;
       cin >> n;
    for(int x=0; x<=n; x++){
        for(int y=0; y<=n-x; y++){
            for(int z=0; z<=n-x-y; z++){
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
    }
   
   
     return 0;
       
    }

  
