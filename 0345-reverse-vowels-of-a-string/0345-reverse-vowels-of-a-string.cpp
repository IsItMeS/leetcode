bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
    else return false;
}

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (l <= r) {
            if (isVowel(s[l]) && isVowel(s[r])) {
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                l++;
                r--;
            }
            else if (isVowel(s[l]) && isVowel(s[r]) == false) {
                r--;
            }
            else if (isVowel(s[l]) == false && isVowel(s[r])) {
                l++;
            }
            else {
                l++;
                r--;
            }
        }
        return s;
    }
};