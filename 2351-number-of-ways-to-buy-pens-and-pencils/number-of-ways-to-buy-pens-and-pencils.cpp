class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int pens_buy=total/cost1;
        long long count=0;

        for(int i=0;i<=pens_buy;i++){
            count+=(total-i*cost1)/cost2+1;
        }

        return count;
    }
};