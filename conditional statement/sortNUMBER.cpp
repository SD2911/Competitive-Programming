// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int x,y,z;
    x=a,y=b,z=c;
    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);

    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
     cout<<x<<endl<<y<<endl<<z<<endl;


    return 0;
}
