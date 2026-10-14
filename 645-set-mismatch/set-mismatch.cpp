class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=n*(n+1)/2;
        vector<int> ans;

        vector<int> freq(n+1,0);
        int duplicate=0;

        for(int i=0;i<n;i++){
            sum1+=nums[i];
            freq[nums[i]]++;

            if(freq[nums[i]]==2){
                duplicate=nums[i];
            }
        }

        int missing=sum2+duplicate-sum1;

        ans.push_back(duplicate);
        ans.push_back(missing);

        return ans;
    }
};