class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int maxm=nums[0];
        for(int i=0;i<n;i++){
            if(maxm<nums[i]){
                maxm=nums[i];
                ans=i;
            }
        }

        sort(nums.begin(),nums.end());

        if(2*nums[n-2]<=nums[n-1] || nums[n-2]==0) return ans ;
        return -1;
    }
};