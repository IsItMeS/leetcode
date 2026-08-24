class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        while (i < n && k > 0 && nums[i] < 0) {
            nums[i] *= -1;
            i++;
            k--;
        }
        if (k % 2 != 0) {
            int mini = 0;
            for (int j = 1; j < n; j++) {
                if (nums[j] < nums[mini]) {
                    mini = j;
                }
            }
            nums[mini] *= -1;
        }
        int sum = 0;
        for (int x : nums) {
            sum += x;
        }
        return sum;
    }
};