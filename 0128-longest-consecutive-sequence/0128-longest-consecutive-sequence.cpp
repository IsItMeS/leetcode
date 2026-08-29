class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int i : nums) {
            st.insert(i);
        }
        int maxx = 0;
        for (int x : st) {
            if(st.count(x - 1) == 0) {
                int j = x, count = 0;
                while(st.count(j)) {
                    j++;
                    count++;
                }
                maxx = max(count, maxx);
            }
        }
        return maxx;
    }
};