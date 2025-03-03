#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
    // test{
       

    map<int, string> student;

    student[1] = "Jacqueline";
    student[2] = "Blake";
    student[3] = "Denise";
    student[4] = "Aaron";

    // declare map iterator
    map<int, string>::iterator iter;

    // use iterator to display map elements
    for (iter = student.begin(); iter != student.end(); ++iter) {
        cout << iter->first << " - " << iter->second << endl;
    }

       
      
          
       //}
        
      return 0;
    }
