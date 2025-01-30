#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
      string s1, s2;
      cin >> s1 >> s2;
    for(char &c : s1) c=tolower(c);
     for(char &c : s2) c=tolower(c);
     
     if(s1==s2) cout<<0<<endl;
     else if(s1<s2) cout<<-1<<endl;
     else cout<<1<<endl;
      return 0;
    }