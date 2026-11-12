class Solution {
public:
    int maximum69Number(int num) {
        int n=num;
        vector<int> six;
        int digits=0;
        vector<int> d;
        int k=0;

        while(n!=0){
            int rem=n%10;
            if(rem==6){
                six.push_back(k);
            }
            d.push_back(rem);
            n=n/10;
            digits++;
            k++;
        }

        int m=-1;
        if(six.size()>0){
            m=six[0];
        }

        for(int i=1;i<six.size();i++){
            if(m<six[i]){
                m=six[i];
            }
        }

        int ans=0;
        for(int i=0;i<digits;i++){
            if(m!=i){
                ans=ans+d[i]*pow(10,i);
            }
            else{
                ans=ans+9*pow(10,i);
            }
        }

        return ans;
    }
};