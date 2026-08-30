class Solution {
public:
    int arrangeCoins(int n) {
        int sum = n;
        int i=0;
        for(i = 1; i>0; i++)
        {
            sum -= i;
            if(sum <= i)
                return i;
            if(sum == 0)
                break;
        }
        return i;
    }
};