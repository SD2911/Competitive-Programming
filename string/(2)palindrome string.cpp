#include <bits/stdc++.h>
using namespace std;
int main(){
         string s;
         cin >> s;
         int ln = s.size();

         bool palindrome = true;
         for(int i=0;i<ln;i++){
            if(s[i]!=s[ln-i-1]) palindrome = false;
         }
         if(palindrome) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    return 0;
}
