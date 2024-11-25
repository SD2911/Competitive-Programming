// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
       int t; cin >> t;
       while(t--)
           {
               int n;
               cin >> n;
               int sum=0;
               for(int i=1;n!=0;){
                   if(n%2==1) sum++;
                   n=n/2;
               }
               int nm=0;
               for(int k=0;k<sum;k++){
                   nm=nm+pow(2,k);
               }
               cout<<nm<<endl;
           }

}
