class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int i,j,count;
        int sum=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            count=0;
            for(j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                count++;
            }
            if (count==1)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};