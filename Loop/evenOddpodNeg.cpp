// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
int n,a,even=0,odd=0,pos=0,neg=0;
 cin >> n;
 for(int i=1; i<=n; i++){
     cin >> a;
    if(a<0) neg+=1;
     if(a>0) pos+=1;
      if(a%2==0) even+=1;
       if(a%2!=0) odd+=1;}

       cout<<"Even: "<<even<<endl;
       cout<<"Odd: "<<odd<<endl;
       cout<<"Positive: "<<pos<<endl;
       cout<<"Negative: "<<neg<<endl;


}
