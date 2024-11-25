#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n/365 <<" "<<"years"<<endl;
    cout << (n%365)/30<<" "<<"months"<<endl;
    cout << (n%365)%30<<" "<<"days"<<endl;




}


