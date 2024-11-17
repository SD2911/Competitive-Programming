
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            int max_in_subarray=a[i];
            for(int j=i;j<n;j++){
     max_in_subarray=max(max_in_subarray,a[j]);
     cout<<max_in_subarray<<" ";
            }
       }
    cout<<endl;
}
    return 0;
}
