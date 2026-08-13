class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) 
    {
        int i,j,n,count = 0;
        int first,second;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            if ( digit == nums[i])
            count ++;
            if (nums[i]>9)
            {
                for(first=nums[i];first > 0; first = first/10)
                {
                 second = first%10;
                 if (digit == second)
                 count++;
                }
            }
        }
        return count;
    }
};