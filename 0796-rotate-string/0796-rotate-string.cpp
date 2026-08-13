class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) 
        return true;
        if(s.length()!=goal.length()) 
        return false;
        s=s+s;
        return s.find(goal)<s.length();
    }
};