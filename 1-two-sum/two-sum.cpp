class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    sum=nums[i]+nums[j];
                    
                    if(sum==target){
                        ans.push_back(i);
                        break;
                        ans.push_back(j);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};