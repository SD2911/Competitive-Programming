#include<bits/stdc++.h>
using namespace std;
int main() {
         int n;
         cin >> n;
         bool isPerfect=false;
         for(int i=1;i*i<=n;i++){
            if(i*i==n) cout<<"perfect"<<endl;
            isPerfect=true;
         }
         if(!isPerfect) cout<<"Not perfect"<<endl;

    return 0;
}
