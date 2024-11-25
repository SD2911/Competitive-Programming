#include<bits/stdc++.h>
using namespace std;
int main() {
       int n;
       cin >> n;
       while(n--){
      string s;
      cin >> s;
      int l=s.length();
      for(int i=l-1;i>=0;i--){
          cout<<s[i]<<" ";
      }
      cout<<endl;
       }


}
