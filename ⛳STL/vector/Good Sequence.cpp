You are given a sequence of positive integers of length 
N, a=(a 1​ ,a 2 ,...,a N ). Your objective is to remove some of the elements in a so that 
a will be a good sequence.

Here, an sequence b is a good sequence when the following condition holds true:

For each element x in b, the value x occurs exactly x times in b.For example, (3,3,3), (4,2,4,1,4,2,4) and 
() (an empty sequence) are good sequences, while (3,3,3,3) and (2,4,1,4,2) are not.

Find the minimum number of elements that needs to be removed so that a will be a good sequence.

Constraints
1≤N≤10 
5
a 
i  is an integer.
1≤a i ≤10 9
 
Input
Input is given from Standard Input in the following format:

N
a 
1
​
  
a 
2
​
  
... 
a 
N
​
 
Output
Print the minimum number of elements that needs to be removed so that 
a will be a good sequence.

Sample Input 1
Copy
4
3 3 3 3
Sample Output 1
Copy
1
We can, for example, remove one occurrence of 
3. Then, 
(3,3,3) is a good sequence.

Sample Input 2
Copy
5
2 4 1 4 2
Sample Output 2
Copy
2


#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);}
#define ll long long
using namespace std;
int main(){
    fast
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int>freq;
        for(int i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        int removals = 0;
        for(auto& entry : freq){
            int value = entry.first;
            int cnt = entry.second;
            if(cnt>value) removals += (cnt-value);
   else if(cnt<value)  removals += cnt;       
        }
        cout<<removals<<endl;
        
      return 0;
    }
