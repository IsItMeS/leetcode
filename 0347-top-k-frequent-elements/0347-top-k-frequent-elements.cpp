class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
         priority_queue < pair<int,int> > pq;
         for (auto fnum : freq)
         {
            pq.push({fnum.second,fnum.first});
         }
         vector<int> ans;
         while(k>0)
         {
         ans.push_back(pq.top().second);
         pq.pop();
         k--;
         }
         return ans;
    }
};