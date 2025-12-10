// index of min_number in array
#include <bits/stdc++.h>
using namespace std;
vector<int> a = {56, 50, 10, 5, 60, 67, 100000};
  int isOk(int id){
      if(a[id]<=a[0]) return 0;
      else return 1;
  }             
int main(){
         int n = a.size();
         int l = 0,r = n;
         while(l<r){
             int mid = (l+r)/2;
             if(isOk(mid)==0) l = mid+1;
             else r=mid;
         }
            cout<<l-1<<endl;
        
      return 0;
    }
