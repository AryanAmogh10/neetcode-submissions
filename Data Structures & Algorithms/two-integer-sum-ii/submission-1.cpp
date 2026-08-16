class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> res;
        while (l < r)
        {
            if (numbers[l] + numbers[r] == target)
            {
                res.emplace_back(l+1);
                res.emplace_back(r+1);
                return res;
            }
            if (numbers[l] + numbers[r] > target) r--;
            else l++;
        }
        return res;
    }
};
