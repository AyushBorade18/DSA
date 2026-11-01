class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int st=0;
        int end=n-1;
        int i=n-1;

        while(st<=end){
            int left=nums[st]*nums[st];
            int right=nums[end]*nums[end];

            if(left>right){
                ans[i]=left;
                st++;
            }
            else{
                ans[i]=right;
                end--;
            }

            i--;
        }

        return ans;
    }
};