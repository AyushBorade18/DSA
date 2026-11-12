class Solution {
public:
    bool isSameAfterReversals(int x) {
        if(x==0 || x%10!=0){
            return true;
        }
        return false;
    }
};