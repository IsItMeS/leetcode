class Solution {
public:
    string largestOddNumber(string num) {
        int odd = -1;
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                odd = i;
                break;
            }
        }
        string ans = "";
        if (odd == -1) return ans;
        return num.substr(0, odd + 1);
    }
};