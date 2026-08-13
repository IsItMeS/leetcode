class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int ans, neg = 0;
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                neg++;
            else if (nums[i] > 0)
                pos++;
            else if (nums[i] == 0)
                continue;
        }
        ans = max(neg, pos);
        return ans;
    }
};