Perform push and pop operations on a deque. Implement Deque and avoid using inbuilt library.

Input Format

First line of input contains T - number of operations. Its followed by T lines, each line contains either "push_front x" or "push_back x" or "pop_front" or "pop_back".

Constraints

1 <= T <= 10000
-100 <= x <= 100

Output Format

For each of "pop_front" and "pop_back" operations, print the popped element, separated by newline. If the deque is empty, print "Empty".

Inputcopy	Outputcopy
10
push_back 5
pop_front
pop_front
push_back 10
push_front -15
pop_back
push_back -10
push_back 20
pop_front
pop_front
5
Empty
10
-15
-10





#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
using namespace std;
int main(){
    fast
      //test{
      int n;
      cin >> n;
           deque<int> dq;
           while(n--){
            string type;
           cin >> type;
           
           if(type=="push_front"){
               int x;
               cin >> x;
               s.push_front(x);
           }
           else if(type=="push_back"){
               int x;
               cin >> x;
               s.push_back(x);
           }
           
           else if(type=="pop_front"){
               if(!dq.empty()){
                   cout<<dq.front()<<endl;
                   s.pop_front();
                   
               }
               else cout<<"Empty"<<endl;
           }
           
            else if(type=="pop_back"){
               if(!dq.empty()){
                   cout<<dq.back()<<endl;
                   s.pop_back();
                   
               }
               else cout<<"Empty"<<endl;
           }
           
           
         
           }
        //}
      return 0;
    }
