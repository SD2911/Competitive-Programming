#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
   bool palindrome=true;
   for(int i=0;i<n/2;i++){
       if(a[i] != a[n-i-1]){
           palindrome = false;
           break;
       }
   }
   if(palindrome) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0;
}

