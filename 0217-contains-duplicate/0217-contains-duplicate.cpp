class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> check;
        for (int num : nums) {
            if (check[num] >= 1)
                return true;
            check[num]++;
        }
        return false;
    }
};