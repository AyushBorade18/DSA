class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int i=1;
        int j=0;

        while(candies>0){
            if(candies>=i){
                ans[j]+=i;
                candies-=i;
            }
            else{
                ans[j]+=candies;
                candies=0;
            }

            i++;
            j++;

            if(j==num_people){
                j=0;
            }
        }

        return ans;
    }
};