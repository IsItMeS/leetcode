class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int i,j,k,col;
        int maxx;
        int minn;
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        for(i=0;i<m;i++){
            minn = matrix[i][0];
            col = 0;
            for(j=0;j<n;j++){
                if (matrix[i][j] < minn) {
                    minn = matrix[i][j];
                    col = j;
                }
            }
            maxx = matrix[0][col];
            for(k=0;k<m;k++){
                maxx = max(matrix[k][col],maxx);
            }
            if(minn == maxx)
                ans.push_back(minn);
        }
        return ans;
    }
};