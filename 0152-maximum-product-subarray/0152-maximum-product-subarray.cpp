class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i, n = nums.size();
        int x = nums[0];
        int y = nums[0];
        int product = *max_element(nums.begin(), nums.end());
        for (i = 0; i < n - 1; i++) {
            int oldx = x;
            int oldy = y;
            product = max(product, nums[i] * nums[i + 1]);
            if (x != 0) 
                x *= nums[i + 1];
            else
                x = nums[i + 1];
            y = min(oldx * nums[i + 1], oldy * nums[i + 1]);
            y = min(y, nums[i + 1]);
            x = max(oldx * nums[i + 1], oldy * nums[i + 1]);
            x = max(x, nums[i + 1]);
            product = max(product, x);
        }
        return product;
    }
};