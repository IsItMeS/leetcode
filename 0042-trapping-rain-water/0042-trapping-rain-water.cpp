class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), sum = 0, lmax = height[0];
        vector<int> rmax(n);
        rmax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) 
        {
            rmax[i] = max(height[i], rmax[i + 1]);
        }
        for (int i = 0; i < n; i++) 
        {
            lmax = max(lmax,height[i]);
            sum = sum + min(lmax, rmax[i]) - height[i];
        }
        return sum;
    }
};