class Solution {
public:
    int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<int> unique;
    unique.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++)
    {
     if(nums[i] != nums[i-1])
     {
          unique.push_back(nums[i]);
        }
    }
    nums = unique;

    if(unique.size() < 3)
    {
    return nums.back();
    }
    int max3;
    max3=nums[nums.size()-3];
    return max3;
    }
};