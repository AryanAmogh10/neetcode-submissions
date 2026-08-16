class Solution {
public:
    bool checkValidString(string s) {
        int count;
        int last;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '('){
                count++;
                last = i;
            }
        }
        for (int i = 0; i <= last; i++)
        {
            if (s[i] == ')'){
                count--;
            }
        }
        if (count > (s.size() - 1 - last)) return false;
        return true;
    }
};
