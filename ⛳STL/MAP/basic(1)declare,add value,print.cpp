#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
    // test{
        map<int, string> student;
  
    // use [] operator to add elements
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // use insert() method to add elements
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // add elements with duplicate keys
    student[5] = "Timothy";
    student[5] = "Aaron";

    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]: " << student[i] << endl;
    }
            
            
       
        
        
      
          
       //}
        
      return 0;
    }
