class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (int i : arr) {
            mp[i]++;
        }
        for (auto i : mp) {
            if (((double)i.second/n) > 0.25) 
            return i.first;
        }
        return 0; 
    }
};