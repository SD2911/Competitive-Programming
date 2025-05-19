Given a sequence of opening and closing parentheses ("(" and ")") you will have to determine if it is a valid one.

A sequence of parentheses is considered valid if every opened parenthesis has a closing parenthesis appearing after it. And, there are no unpaired parenthesis in the sequence.

Input
The input will contain a string of opening and closing parentheses. The string will be no longer than 25 characters.

Output
Print "Yes" if the input string contains a valid sequence of parentheses. Otherwise, print "No".

Samples
Input	Output
((()(
No
Input	Output
((()()))
Yes





#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	stack<char> st;
	int f=1;
	
	for(int i=0; i<n; i++){
	    if(s[i]=='(') st.push('(');
	    else {
	        if(st.empty()) {
	            f=0;
	            break;
	        }
	        st.pop();
	    }
	}
	
	if(st.empty()==0) f=0;
	
	if(f==1) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
    return 0;
}
