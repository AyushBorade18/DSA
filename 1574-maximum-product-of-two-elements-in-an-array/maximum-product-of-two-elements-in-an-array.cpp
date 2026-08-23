class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unsigned n=nums.size();
        int i=n-1;
        int j=n-2;
        int ans=(nums[i] - 1) * (nums[j] - 1);
        return ans;
    }
};