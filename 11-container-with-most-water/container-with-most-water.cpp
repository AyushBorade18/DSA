class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_area=0;
        int h_min=0;
        int i=0;
        int j=n-1;
        int w=0;
        int area=0;
        while(i<j){
            h_min = min(height[i], height[j]);
            w=j-i;
            area=h_min*w;
            if(height[j]<height[i]){
                j--;
            }
            else{
                i++;
            }
            max_area=max(max_area,area);


        }
            return max_area;
        }
};