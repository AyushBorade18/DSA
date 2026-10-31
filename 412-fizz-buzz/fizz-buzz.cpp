class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            ans.push_back(to_string(i));
            if(i%3==0){
                ans[i-1]="Fizz";
            }
            if(i%5==0){
                ans[i-1]="Buzz";
            }
            if(i%3==0 && i%5==0){
                ans[i-1]="FizzBuzz";
            }
        }
        return ans;
    }
};