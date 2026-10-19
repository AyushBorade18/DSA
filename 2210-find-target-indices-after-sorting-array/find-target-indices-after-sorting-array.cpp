class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i;
        vector<int> ans;
        for(i=0;i<n;i++){
            if(nums[i]==target){
                break;
            }
        }
        while(i<n){
            if(nums[i]==target){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};