class Solution {
public:
    bool checkGoodInteger(int n) {
        int num=n;
        int dig_sum=0;
        int sq_sum=0;
        while(num>0){
            int rem=num%10;
            dig_sum+=rem;
            sq_sum+=rem*rem;
            num=num/10;
        }
        if(sq_sum-dig_sum>=50){
            return true;
        }
    return false;
    }
};