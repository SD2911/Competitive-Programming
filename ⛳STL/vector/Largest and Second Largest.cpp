You are given an array 
A
A of 
N
N integers.
Find the maximum sum of two distinct integers in the array.

Note: It is guaranteed that there exist at least two distinct integers in the array.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains single integer 
N
N — the size of the array.
The next line contains 
N
N space-separated integers, denoting the array 
A
A.
Output Format
For each test case, output on a new line, the maximum sum of two distinct integers in the array.

Constraints
1
≤
T
≤
1000
1≤T≤1000
2
≤
N
≤
10
5
2≤N≤10 
5
 
1
≤
A
i
≤
1000
1≤A 
i
​
 ≤1000
The sum of 
N
N over all test cases does not exceed 
2
⋅
10
5
2⋅10 
5
 .
Sample 1
Inputcopy	Outputcopy
4
3
4 1 6
7
3 7 2 1 1 5 3
5
8 2 9 4 9
2
1 2
10
12
17
3



#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
        test{
            int n,mx;
            cin >> n;
            //int sum = 0;
            vector<int> a(n);
            for(int i=0; i<n; i++){
                cin >> a[i];
            }
      int max1 = -1, max2 = -1;
        for(int i=0; i<n; i++){
            if(max1<a[i]){
                max2 = max1;
                max1 = a[i];
            } 
         else if(a[i]>max2 && a[i]<max1) max2=a[i]; 
        }
        cout<<max1+max2<<endl;
        }
        
      return 0;
    }
