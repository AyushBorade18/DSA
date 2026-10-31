class Solution {
public:
    long double power(long double x,long long n){
        if(n==0){
            return 1.0L;
        }

        long double half=power(x,n/2);

        if(n%2==0){
            return half*half;
        }

        return half*half*x;
    }

    double myPow(double x,int n) {
        long double num=x;
        long long p=n;

        if(p<0){
            num=1.0L/num;
            p=-p;
        }

        return (double)power(num,p);
    }
};