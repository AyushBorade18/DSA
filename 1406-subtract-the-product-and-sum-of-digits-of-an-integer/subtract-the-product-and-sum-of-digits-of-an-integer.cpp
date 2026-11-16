class Solution {
public:
    int subtractProductAndSum(int n) {
        int x=n;
        int pr=1;
        int sum=0;
        while(x!=0){
            int rem=x%10;
            sum=sum+rem;
            pr=pr*rem;
            x=x/10;
        }
        return pr-sum;
    }
};