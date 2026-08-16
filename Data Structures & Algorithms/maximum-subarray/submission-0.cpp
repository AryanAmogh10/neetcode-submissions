class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int sm = 0;
        for (auto i : nums)
        {
            if (sm < 0) sm = 0;
            sm += i;
            res = max(res, sm);
        }
        return res;
    }
};
