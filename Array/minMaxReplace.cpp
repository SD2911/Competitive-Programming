
#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int mx=0;
        int mn=0;
        for(int i=1;i<n;i++){
            if(a[i]<a[mn]) mn=i;
            if(a[i]>a[mx]) mx=i;
        }
        swap(a[mn],a[mx]);


        //swap(mn,mx);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;


    return 0;
}
