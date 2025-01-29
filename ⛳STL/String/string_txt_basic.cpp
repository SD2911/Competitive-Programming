
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
     
       string s = "ABC";

  //show last character of the string
      cout<<s.back()<<endl;
     cout<<s[s.size()-1]<<endl;
      
      
   //show all elements of the string in 3 diff way  
    string a = "subrata das";
    for(int i=0; i<a.size(); i++){
          cout<<a[i]<<endl;
    }
      
   //iterating on string
   for(char c:a){
       cout<<c<<endl;
   }
   
   string::iterator it;
   for(it=a.begin(); it!=a.end(); it++){
       cout<< *it <<endl;
   }
   
   //print on reverse order
   for(int i=a.size()-1; i>=0; i++){
       cout<<s[i];
   }
   cout<<endl;
   
   
   //remove specific index
   a.erase(a.begin()+1);  
   cout<<a<<endl;   // u
   
   
   //reverse string
   reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+5); //reverse 1st to 5th
    
    
    //ascii value
    char c = 'B';
    int x = c;
    cout<<x<<endl;  //66
    
    
    string s1 = "abcd";
    string s2 = "abad";    //s2<s1
    
    
    //substring
    string d = "abcdef";
    string e = d.substr(0,5); 
    cout<<e<<endl;    //abcde
    
    
    
    //sort string
    string s = "abcdefghij";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    
    
    //string in vector
    vector<string> v;
      
      
        
      return 0;
    }
