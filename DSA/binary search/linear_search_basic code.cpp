#include <bits/stdc++.h>
using namespace std;
int main(){
           int n;
         cin >> n;
         vector<int> a(n);
         for(int i=0; i<n; i++) cin >> a[i];
         int x;
         cin >> x;
        int left = 0, right = n-1;
        while(left<right){
            int mid = (right+left)/2;
            if(a[mid]<x) left = mid+1;
            else if(a[mid]>=x) right = mid;
        }
           
     cout<<left<<" "<<right<<endl;
        
      return 0;
    }
