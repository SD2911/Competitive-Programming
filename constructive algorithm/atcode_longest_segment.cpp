#include <bits/stdc++.h>
using namespace std;
int main() {
	    int n;
	    cin >> n;
	    int x[100],y[100];
	    for(int i=1;i<=n;i++){
	        cin >> x[i] >> y[i];
	    }
	   int max_sq_dist = 0;
	   for(int i=1;i<=n;i++){
	       for(int j=1;j<=n;j++){
int current_sq_dist = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
max_sq_dist= max(max_sq_dist,current_sq_dist);
	       }
	   }
cout<<fixed<<setprecision(6)<<sqrt(max_sq_dist);
	    return 0;
}
