class Solution {
public:
    int fib(int n) {
        if(n==1) return 1;
        if(n==0) return 0;
        int f2=0;
        int f1=1;
        int f=f1+f2;
        for(int i=2;i<n;i++){
            f2=f1;
            f1=f;
            f=f1+f2;
        }
        return f;
    }
};