#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    //function setprecision that are in #include<iomanip> library
    //Using setprecision(9) to print 9 digits after decimal point.
    cout << 3.141592653*r*r << endl;




}

