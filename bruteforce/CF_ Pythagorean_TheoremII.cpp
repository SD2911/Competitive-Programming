#include <bits/stdc++.h>
using namespace std;
bool isPerfectsquare[100000001];
int main(){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
           isPerfectsquare[i*i]=true;
        }
     int cnt=0;
     for(int a=1;a<=n;a++){
        for(int b=a;b<=n;b++){
            int csquare = a*a+b*b;
    if(csquare<=n*n&&isPerfectsquare[csquare]) cnt++;
        }
     }
     cout<<cnt<<endl;


    return 0;
}

