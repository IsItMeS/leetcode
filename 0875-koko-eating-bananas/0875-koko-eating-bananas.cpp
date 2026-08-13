class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k,left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while (left <= right) {
            k = (left + right) / 2;
            double hours = 0;
            for (int pile : piles) {
                hours = hours + (pile + k - 1) / k;
            }
            if (hours <= h) {
                right = k - 1;
            }
            else if (hours > h) {
                left = k + 1;
            }
        }
        return left;
    }
};