class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int el_sum=0;
        for(int i:nums){
            el_sum+=i;
        }
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(x!=0){
                int rem=x%10;
                sum=sum+rem;
                x=x/10;
            }
        }
        int ans=abs(sum-el_sum);
        return ans;
    }
};