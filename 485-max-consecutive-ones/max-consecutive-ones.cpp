class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();
    int currentStreak=0;
    int maxStreak=currentStreak;
    for(int i=0;i<size;i++){
        if(nums[i]==1){
            currentStreak++;
            maxStreak=max(currentStreak,maxStreak);
        }
        else{
            currentStreak=0;
        }
    }
    return maxStreak;
    }
};