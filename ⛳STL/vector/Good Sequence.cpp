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
