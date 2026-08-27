class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),sum=0,totalsum=0;
        for(auto x : nums){
            totalsum += x;
        }
        vector<int> ans;
        for(int i = n-1; i>=0 ; i--){
            sum+=nums[i];
            ans.push_back(nums[i]);
            if(sum > (totalsum-sum))
                break;
        }
        return ans;
    }
};