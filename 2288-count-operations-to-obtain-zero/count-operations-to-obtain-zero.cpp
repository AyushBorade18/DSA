class Solution {
public:
    int countOperations(int num1, int num2) {
        int n1=num1;
        int n2=num2;
        unsigned int count=0;
        if(num1==0 || num2==0) return 0;
        while(true){
            if(num1>num2){
                num1=num1-num2;
                count++;
            }
            else if(num1<num2){
                num2=num2-num1;
                count++;
            }
            else{
                num2=num2-num1;
                num1=num2;
                count++;
                return count;
            }
        }
        return count;
    }
};