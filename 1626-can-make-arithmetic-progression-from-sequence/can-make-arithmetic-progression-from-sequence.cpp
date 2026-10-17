class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> d;
        for(int i=1;i<arr.size();i++){
            d.push_back(arr[i-1]-arr[i]);
        }
        for(int i=1;i<d.size();i++){
            if(d[i-1]!=d[i]){
                return false;
            }
        }
        return true;
    }
};