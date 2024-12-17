class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        int maxi = -1, index = -1;
        for(int i=0; i<n; i++){
            if(a[i]>maxi){
                maxi = a[i];
                index = i;
            }
        }
        return index;
    }
};