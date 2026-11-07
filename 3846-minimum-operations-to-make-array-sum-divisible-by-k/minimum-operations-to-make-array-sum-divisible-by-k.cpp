class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        if(sum>=k){
            ans=sum%k;
        }
        else{
            ans=sum;
        }
        return ans;
    }
};