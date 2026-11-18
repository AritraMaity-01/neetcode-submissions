class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0,n=heights.size();
        int l=0,r=n-1;
        while(l<r){
            int wd=r-l;
            int hi=min(heights[l],heights[r]);
            ans=max(ans,wd*hi);
            if(heights[l]>heights[r])r--;
            else l++;
        }
        return ans;
    }
};
