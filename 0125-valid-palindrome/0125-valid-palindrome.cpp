class Solution {
public:
    bool isPalindrome(string s) 
    {   int i=0 ,j;
        string answer;
        for(char c: s)
        {
            if(isalnum(c))
            {
                answer += tolower(c);
            }
        }
        int n = answer.size();
        j= n-1;
        while(i<j)
        {
            if(answer[i] != answer[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};