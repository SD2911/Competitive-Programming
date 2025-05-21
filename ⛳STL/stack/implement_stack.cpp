Perform push and pop operations on stack. Implement Stacks and avoid using inbuilt library.

Input Format

First line of input contains T - number of operations. Its followed by T lines, each line contains either "push x" or "pop".

Constraints

1 <= T <= 10000
-100 <= x <= 100

Output Format

For each "pop" operation, print the popped element, separated by newline. If the stack is empty, print "Empty".

Inputcopy	Outputcopy
8
push 5
pop
pop
push 10
push -15
pop
push -10
pop
5
Empty
-15
-10
Explanation 0






#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
using namespace std;
int main(){
    fast
      //test{
      int n;
      cin >> n;
           stack<int> s;
           while(n--){
            string type;
           cin >> type;
           
           if(type=="push"){
               int x;
               cin >> x;
               s.push(x);
           }
           else if(type=="pop"){
               if(!s.empty()){
                   cout<<s.top()<<endl;
                   s.pop();
                   
               }
               else cout<<"Empty"<<endl;
           }
         
           }
        //}
      return 0;
    }

  
