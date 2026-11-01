#include <numeric>
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> temp=nums;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=0;j<=i;j++){
                sum=sum+temp[j];
            }
            nums[i]=sum;
        }
        return nums;
    }
};