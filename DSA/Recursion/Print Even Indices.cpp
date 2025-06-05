Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note:
Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

Examples
InputCopy
4
1 4 2 7
OutputCopy
2 1 
InputCopy
7
1 5 8 2 3 9 11
OutputCopy
11 3 8 1 






#include <bits/stdc++.h>
using namespace std;

void ok(int a[], int index){
    if(index<0) return;
   cout<<a[index]<<" ";
   ok(a,index-2);
    
}

int main(){
    //fast
      //test{
          ll n;
          cin >> n;
          int a[n];
          for(int i=0; i<n; i++) cin >> a[i];
           int start_index;
          if(n%2==0) start_index = n-2;
          else start_index = n-1;
          ok(a,start_index);
       cout<<endl;
     
        //}
      return 0;
    }
