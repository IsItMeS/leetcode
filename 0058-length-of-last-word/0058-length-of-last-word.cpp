class Solution {
public:
    int lengthOfLastWord(string s) {
         stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word)
        {
            words.push_back(word);
        }
        int n = words.size();
        int nn = words[n-1].size();
        return nn;
    }
};