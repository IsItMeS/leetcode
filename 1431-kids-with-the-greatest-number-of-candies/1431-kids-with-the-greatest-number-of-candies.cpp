class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i,j;
        vector<bool> answer;
        int maxx = candies[0];
        int nc = 0;
        for(i=1;i<candies.size();i++)
        {
            maxx = max(maxx,candies[i]);
        }
        for(i=0;i<candies.size();i++)
        {
            nc = candies[i] + extraCandies;
            if(nc >= maxx)
            answer.push_back(true);
            else
            answer.push_back(false);
        }
        return answer;
    }
};