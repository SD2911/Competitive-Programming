#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast{ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    test{
    int n;
    cin >> n;
    int vanya = 0;
    for(int i=0; i<10; i++){
        if((n+1)%3==0 || (n-1)%3==0) vanya++;
    }
    if(vanya==10) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
          
   
}
      return 0;
    }
