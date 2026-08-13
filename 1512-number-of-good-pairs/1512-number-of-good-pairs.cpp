class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j,count=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(nums[i]==nums[j])
                count++;
            }
        }
        return count;
    }
};