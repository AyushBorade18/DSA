class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st=1;
        int end=n-2;

        if(n == 1){
            return nums[0];
        }
        if(nums[0] != nums[1]){
            return nums[0];
        }

        if(nums[n-1] != nums[n-2]){
            return nums[n-1];
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(nums[mid-1]==nums[mid]){
                if((mid-1)%2!=0){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
        
            }
            if(nums[mid+1]==nums[mid]){
                if((mid+1)%2!=0){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
        
            }
            
        }
        return -1;
    }
};