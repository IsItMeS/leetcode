class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0,i=0;
        for(i=1; i < n; i++){
            if(nums[i]<=nums[i-1]){
                count = count + nums[i-1]-nums[i]+1;
                nums[i] = nums[i-1]+1;
            }
        }
        return count;
    }
};