class Solution {
public:
    string truncateSentence(string s, int k) {
        int n= s.size();
        char ch;
        string ans="";
        int i;
        int count = 0;
        for(char ch : s)
        {
        if (ch==' ')
        {
            count++;
            if(count == k)
            break;
            ans+=ch;
        }
        else ans+=ch;
        }
        return ans;
    }
};