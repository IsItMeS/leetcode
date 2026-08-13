class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,x,y;
        int n=nums.size();
        for (i=0;i<n;i++)
        {
            if(target==nums[i])
            {
            x=i; // stores first matching index 
            break; // only stores the first matching
            }
            else
            x = -1;
        }
         for (i=n-1;i>=0;i--)
        {
            if(target==nums[i])
            {
            y=i;
            break;
            }
            else
            y = -1;
        }
        return {x,y};
    }
};