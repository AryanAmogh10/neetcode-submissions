class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool count1, count2, count3 = false;
        for (int i = 0; i < triplets.size(); i++)
        {
            if (triplets[i][0] == target[0] && triplets[i][1] <= target[1] && triplets[i][2] <= target[2]) count1 = true;
            if (triplets[i][1] == target[1] && triplets[i][0] <= target[0] && triplets[i][2] <= target[2]) count2 = true;
            if (triplets[i][2] == target[2] && triplets[i][0] <= target[0] && triplets[i][1] <= target[1]) count3 = true;
        }
        if (count1 && count2 && count3) return true;
        return false;
    }
};
