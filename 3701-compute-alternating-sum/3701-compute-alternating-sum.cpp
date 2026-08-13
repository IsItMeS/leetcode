class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int sum=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0 || i==0)
            {
                sum+=nums[i];
            }
            else
            sum-=nums[i];
        }
        return sum;
    }
};