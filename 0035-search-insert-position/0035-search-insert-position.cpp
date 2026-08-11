class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j=0;
        int n=nums.size();
        for (i=0;i<n;i++)
        {
            if(target==nums[i])
            {
                return i;
            }
            else if(target<=nums[i])
            {
                return i;
            }
        }
        return n;
    }
};