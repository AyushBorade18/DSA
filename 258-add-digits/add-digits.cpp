class Solution {
public:
    int addDigits(int num) {
        if(num<0){
            return 0;
        }
        
        while(num>=10){
        int x=num;
        int sum=0;
            
        while(x>0){
            int rem=x%10;
            sum=sum+rem;
            x=x/10;
        }
        num = sum;
        }
        return num;
    }
};