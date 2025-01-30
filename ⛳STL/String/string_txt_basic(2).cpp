☠️// unique string
#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
         vector<string> vecOfString;
         vecOfString.push_back("Hello");
         vecOfString.push_back("World");
         vecOfString.push_back("Hii");
         vecOfString.push_back("Hello");
         vecOfString.push_back("World");
         
         
         for(string s: vecOfString){
             cout<<s<<endl;
         }
         
    sort(vecOfString.begin(),vecOfString.end()); //maintain lexilography order
    
       for(string s: vecOfString){
             cout<<s<<endl;
         }
         
   auto address = unique(vecOfString.begin(),vecOfString.end());    
   
   for(int i=0; i<vecOfString.size(); i++){
       cout<<"index = "<<i<<" "<<vecOfString[i]<<endl;
   }
   
   vecOfString.erase(address, vecOfString.end());
   
   cout<<endl<<endl<<"----after erasing----"<<endl<<endl;
   
   
   for(int i=0; i<vecOfString.size(); i++){
       cout<<"index = "<<i<<" "<<vecOfString[i]<<endl;
   }      
    
    
 ☠️//to_string
   int x = 25;
  string s = to_string(x);
  cout<<s<<endl;


 ☠️//stoi()
 string s = "579";
  int x = stoi(str);
  cout<< x+10 << endl;


☠️ //find()
  string s = "helloMyWorld";
  if(s.find("My") != -1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  
         
        
      return 0;
    }
