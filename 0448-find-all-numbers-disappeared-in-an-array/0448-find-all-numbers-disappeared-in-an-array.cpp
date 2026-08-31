class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i : nums) {
            freq[i]++;
        }
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            if (freq.count(i) == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};