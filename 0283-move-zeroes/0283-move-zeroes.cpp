class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i,j,temp;
        int n=nums.size();
        j=0;
        for(i=0;i<n;i++)
        {
                if(nums[i]!=0)
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    j++;
                }
        }

    }
};