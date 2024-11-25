#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin >> n;
   vector<pair<int, int>>movies(n);
   for(int i=0;i<n;i++){
       cin >> movies[i].first >> movies[i].second;
   }
sort(movies.begin(),movies.end(), [](pair<int, int>& a,pair<int, int>& b){
    return a.second < b.second;
});
int cnt=0;
int last_end = 0;
for(int i=0;i<n;i++){
    if(movies[i].first >= last_end){
        cnt++;
        last_end = movies[i].second;
    }
}
   cout<<cnt<<endl;

	    return 0;
}

