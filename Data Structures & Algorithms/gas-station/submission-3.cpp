class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) return -1;
        int a = 0, diff = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            diff += gas[i] - cost[i];
            if (diff < 0)
            {
                diff = 0;
                a = i + 1;}
        }
        return a;
    }
};
