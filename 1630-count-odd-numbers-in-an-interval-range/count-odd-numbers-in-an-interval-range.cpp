class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        while(low<=high){
            if(low%2!=0){
                count++;
            }
            if(high%2!=0){
                count++;
            }
            if(low==high && low%2!=0 && high%2!=0){
                count--;
            }

            low++;
            high--;
        }
        return count;
    }
};