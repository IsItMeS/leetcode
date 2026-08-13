class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j,x=0;
        int target =1;
        int n=nums.size(); 
        for(i=0;i<n;i++)
        {
          if (nums[i] == target) 
          target ++;
          else if ( nums[i] > target)    
          return target;
        }
        return target;
    }
};