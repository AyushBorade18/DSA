class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;

        sort(nums.begin(),nums.end());

        int count=1;
        int ans=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                if(nums[i-1]+1==nums[i]){
                    count++;
                }
                else{
                    count=1;
                }
            }

            ans=max(ans,count);
        }

        return ans;
    }
};