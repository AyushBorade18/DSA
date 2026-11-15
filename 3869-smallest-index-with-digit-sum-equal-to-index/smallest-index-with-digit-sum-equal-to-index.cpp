class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            sum=0;
            while(x!=0){
                int rem=x%10;
                sum=sum+rem;
                x=x/10;
            }
            if(i==sum){
                return i;
            }
        }
        return -1;
    }
};