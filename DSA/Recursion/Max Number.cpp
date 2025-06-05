Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
InputCopy
5
1 -3 5 4 -6
OutputCopy
5






#include <bits/stdc++.h>
using namespace std;

int findmax(const vector<int>&a,int n){
    if(n==1) return a[0];
    return max(a[n-1],findmax(a,n-1));
}

int main(){
    fast
      //test{
          int n;
          cin >> n;
         vector<int> a(n);
         for(int i=0; i<n; i++) cin >> a[i];
        cout<<findmax(a,n);
        //}
      return 0;
    }
