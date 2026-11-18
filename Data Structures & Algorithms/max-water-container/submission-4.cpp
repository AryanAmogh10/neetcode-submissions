class Solution {
public:
    int maxArea(vector<int>& heights) {
        int temp;
        int res = 0;
        int l = 0;
        int r = heights.size() - 1;
        while (l < r){
            temp = (r-l)*(min(heights[r], heights[l]));
            res = max(res, temp);
            if (heights[l] <= heights[r]) l++;
            else r--;
        }
        return res;
    }
};
