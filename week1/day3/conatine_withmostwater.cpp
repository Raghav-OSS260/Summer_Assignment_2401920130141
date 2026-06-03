class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int area=-1;
        int maxarea=-1;
        while(l<r)
        {
            area=(r-l)*min(height[l],height[r]);
            maxarea=max(area,maxarea);
            if(height[l]<height[r])
             l++;
             else
             r--;
        }
    return maxarea;
    }
};
