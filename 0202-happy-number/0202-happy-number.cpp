class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(n != 1)
        {
            if(visited.find(n) != visited.end())
                return false;
            visited.insert(n);
            int sq = 0;
            while(n > 0)
            {
                int last = n % 10;
                sq += last * last;
                n /= 10;
            }
            n = sq;
        }
        return true;
    }
};