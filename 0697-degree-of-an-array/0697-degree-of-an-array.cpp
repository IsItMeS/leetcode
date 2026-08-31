class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        int degree = 0;
        for (auto x : freq) {
            degree = max(degree, x.second);
        }
        int ans = nums.size();
        for (auto y : freq) {
            if (y.second == degree) {
                int first = -1, last = -1;
                for (int i = 0; i < nums.size(); i++) 
                {
                    if (nums[i] == y.first) {
                        if (first == -1)
                            first = i;
                        last = i;
                    }
                }
                ans = min(ans, last - first + 1);
            }
        }
        return ans;
    }
};