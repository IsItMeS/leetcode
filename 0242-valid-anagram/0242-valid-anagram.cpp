class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n=s.size();
        int num = t.size();
        if ( n!=num)
        return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
        {
            return true;  
        }
        return false;
    }
};