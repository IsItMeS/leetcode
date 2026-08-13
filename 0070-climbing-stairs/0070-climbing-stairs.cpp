class Solution {
public:
    int climbStairs(int n) {
        if (n<=2)
        return n;
        vector<int> count(n+1);
        count[0]=0;
        count[1]=1;
        count[2]=2;
        for ( int i=3;i<=n;i++)
        {
            count[i]=count[i-2]+count[i-1];
        }
        return count[n];
    }
};