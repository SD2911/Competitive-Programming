#include <bits/stdc++.h>
using namespace std;
int main(){
         //char s[20];
         string s;
         cin >> s;
         int ln=s.size();
 //line 7 & 8 string er length ber korar jonno
        //int ln = 0;
        //while(s[ln] != '\0') ln++;
 //line 10-13 e string reverse korar jonno sesher index 1st e and 1st index last e.ebhave continue
        for(int i=0;i<ln/2;i++){
        char c = s[ln-i-1];
        s[ln-i-1]=s[i];
        s[i]=c;
        }
        cout<<s<<endl;
    return 0;
}
