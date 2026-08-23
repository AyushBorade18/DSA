class Solution {
public:
    int maximumGap(vector<int>& nums) {
        unsigned int n=nums.size();
        sort(nums.begin(),nums.end());
        int max_diff=0;
        if(n==1){
            return 0;
        }
        for(int i=0,j=i+1;i<n && j<n;i++,j++){
            max_diff=max(max_diff,nums[j]-nums[i]);
        }
        return max_diff;
    }
};