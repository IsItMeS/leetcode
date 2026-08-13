class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int target = nums[0];
        vector<int> ans;
        int n = nums.size();
        for (i = 0 ; i<n ; i++)
        {
            if(nums[i]==target)
            target++;
            else 
            {
            ans.push_back(target);
            target++;
            i--;
            }
        }
        return ans;
    }
};