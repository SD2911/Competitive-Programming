// first occurance of 1 and last occurance of 0
#include <bits/stdc++.h>
using namespace std;
int main(){
         int a[10] = {0,0,0,1,1,1};
         int n = 6;
         int l = 0,r = n;
         while(l<r){
             int mid = (l+r)/2;
             if(a[mid]==0) l = mid+1;
             else r=mid;
         }
            int last_zero = l-1;
            int first_one = l;
            cout<<last_zero<<" "<<first_one<<endl;
        
      return 0;
    }
