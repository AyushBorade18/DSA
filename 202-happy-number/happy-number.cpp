class Solution {
public:
    bool isHappy(int n) {
        int rem;
        int sum=0;

        while(n!=1){
            if(n!=4){
                while(n>0){
                    rem=n%10;
                    sum=sum+rem*rem;
                    n=n/10;
                }
                n=sum;
                sum=0;
            }
            else{
                return false;
            }
        }
        return n==1;
    }
};
