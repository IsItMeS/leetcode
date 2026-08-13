class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,count=0;
        int product = 1;
        for(i=0;i<nums.size();i++)
        {  
            if(nums[i]!=0)
            product*=nums[i];
            if(nums[i]==0)
            count++;
        }
        for(i=0;i<nums.size();i++)
        { 
            if(count>1)
            {
                nums[i]=0;
            }
            else if(count==0)
            {
             nums[i]=product/nums[i];
            }
            else 
            {
            if(nums[i]==0)
            nums[i]=product;
            else
            nums[i]=0;
           }
        }
        return nums;
    }
};