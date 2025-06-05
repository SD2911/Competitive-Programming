Given a number N. Print the binary equivalent of N.
Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 104) number of test cases.
Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
For each test case print a single line contains the answer according to the required above.

Example
InputCopy
2
10
3
OutputCopy
1010
11






#include <bits/stdc++.h>
#define ll long long
using namespace std;

void ok(int n){
    if(n==0) return;
    ok(n/2);
    cout<<n%2;
    
}

int main(){
    fast
      test{
          ll n;
          cin >> n;
          ok(n);
        cout<<endl;
     
        }
      return 0;
    }
  
