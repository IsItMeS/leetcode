class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, j, rsum = 0, lsum = 0, total=0;
        int n = nums.size();
        for (int j : nums) {
            total += j;
        }
        for (i = 0; i < n; i++) {
            int rsum = total - nums[i] - lsum;
            if (lsum == rsum) {
                return i;
            }
            lsum += nums[i];
        }
        return -1;
    }
};