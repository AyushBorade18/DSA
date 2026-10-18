class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num;

        while(low<=high){
            long long mid=low+(high-low)/2;
            long long x=mid*mid;

            if(x==num) return true;
            else if(x<num) low=mid+1;
            else high=mid-1;
        }

        return false;
    }
};