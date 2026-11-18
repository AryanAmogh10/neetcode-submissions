class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r){
            while (!alphanum(s[l])) l++;
            while (!alphanum(s[r])) r--;
            if (l < r && tolower(s[l]) != tolower(s[r])) return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }

    bool alphanum(char c){
        return (c >= 'A' && c <='Z' || c >= '0' && c <= '9' || c >= 'a' && c<= 'z');
    }
};
