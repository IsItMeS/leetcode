class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        for (char ch : word) 
        {
            if (isupper(ch))
                upper++;
        }
        if (upper == word.size()) // ALL CAPS
            return true;
        if (upper == 0) // all lowercase
            return true;
        if (upper == 1 && isupper(word[0])) // First letter capital only
            return true;
        return false;
    }
};