class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), sum = 0;
        int rmax = height[n - 1];
        int lmax = height[0];
        for (int i = 0; i < n; i++) 
        {
            lmax = max(lmax,height[i]);
            // finding rmax
            rmax = height[n - 1];
            for (int k = n - 1; k >= i; k--) {
                rmax = max(rmax, height[k]);
            }
            sum = sum + min(lmax, rmax) - height[i];
        }
        return sum;
    }
};