class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int count1,count0;
        int i,j,k,q;
        vector<vector<int>> answer;
        answer = board;
        int m = board.size();
        int n = board[0].size();
        for(i=0;i<m;i++) 
        {
            for(j=0;j<n;j++)
            {
                count1=0; // rows mei nhi ayega uh
                count0=0;
                    for(k=i-1;k<=i+1;k++) // if k=i compare it with i only and see <= its equal
                    {
                        for(q=j-1;q<=j+1;q++) // equal sign
                        {
                            if(k < 0 || k >= m || q < 0 || q >= n)
                            continue;

                            if(k==i && q==j)
                            continue;

                            if(board[k][q] == 0)
                                count0++;
                            else
                                count1++;
                        }
                    }
                if (board[i][j]==1)
                    {
                        if(count1<2)
                         {
                            answer[i][j]=0;
                         }
                        else if(count1>3)
                         {
                            answer[i][j]=0;
                         }
                    }
                else if (board[i][j]==0)
                    {
                         if (count1 == 3)
                         answer[i][j]=1;
                    }   
            }     
        }
    board = answer;
    }
};
