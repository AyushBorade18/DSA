class Solution {
public:
    int numberOfMatches(int n) {
        unsigned int ans=0;
        int match;
        int adv;

        while(n!=1){
            if(n%2!=0){
                match=(n-1)/2;
                adv=((n-1)/2)+1;
            }
            else{
                match=n/2;
                adv=n/2;
            }

            ans=ans+match;
            n=adv;
        }

        return ans;
    }
};