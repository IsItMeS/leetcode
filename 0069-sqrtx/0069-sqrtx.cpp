class Solution {
public:
    int mySqrt(int x) {
        long int left = 0, right = x / 2;
        long int mid;
        if(x==1)
        return 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (mid * mid == x) return mid;
            else if (mid * mid < x) {
                left = mid+1;
            }
            else if (mid * mid > x) {
                right = mid-1;
            }
        }
        return right;
    }
};