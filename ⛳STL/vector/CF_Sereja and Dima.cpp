#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int first_element = 0;
        int last_element = n-1;
        int serejaScore = 0;
        int demaScore = 0;
        
        for(int turn=0; turn<n; turn++){
            if(turn%2==0){
                if(a[first_element]>a[last_element]) {
                    serejaScore+=a[first_element];
                    first_element++;
                }
                else{
                    serejaScore+=a[last_element];
                    last_element--;
                }
            }
            else {
                if(a[first_element]>a[last_element]) {
                    demaScore+=a[first_element];
                    first_element++;
                }
                else{
                    demaScore+=a[last_element];
                    last_element--;
                }
            }
        }
    cout<<serejaScore<<" "<<demaScore<<endl;
    
    
    
    return 0;
}
