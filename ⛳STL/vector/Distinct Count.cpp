Problem
Given an array A of N integers, classify it as being Good Bad or Average. It is called Good, if it contains exactly X distinct integers, Bad if it contains less than X distinct integers and Average if it contains more than X distinct integers.

Input format:
First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and X.
Second line of each test case consists of N space separated integers denoting the array elements.

Output format:
Print the required answer for each test case on a new line.

⛳
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
       sort(a.begin(),a.end());
       int distinct = 0;
       for(int i=0; i<n; i++){
           if(a[i]!=a[i+1]) distinct++;
       }
    if(distinct==x) cout<<"Good"<<endl;
    else if(distinct<x) cout<<"Bad"<<endl;
    else cout<<"Average"<<endl;
    
    }   
    return 0;
}
