class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans=0;
        int num=n;
        unordered_map<int,int> mpp;
        while(num>0){
            int rem=num%10;
            mpp[rem]++;
            num=num/10;
        }
        for(auto i:mpp){
            ans=ans+i.first*i.second;
        }
        return ans;
    }
};