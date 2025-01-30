#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;

bool isVowel(char c){
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int vowelCnt(string s){
    int cnt = 0;
    for(char c:s){
        cnt += isVowel(c);
    }
    return cnt;
}

int main(){
    fast
         string s1, s2, s3;
         getline(cin, s1);
         getline(cin, s2);
         getline(cin, s3);
         
        if(vowelCnt(s1)==5&&vowelCnt(s2)==7&&vowelCnt(s3)==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;         
         
      return 0;
    }