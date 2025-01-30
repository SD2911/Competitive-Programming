
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
  bool isVowel(char c){
      return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
  }


int main(){
    fast
         string s;
         cin >> s;
         string ans = "";
         for(char c:s){
             c = tolower(c);
             if(isVowel(c)) continue;
             ans += ".";
             ans += c;
         }
        cout<<ans<<endl; 
        
      return 0;
    }
