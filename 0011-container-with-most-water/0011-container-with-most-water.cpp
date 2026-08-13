class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int i,k,n = height.size();
        k=n-1;
        i=0;
        int min , maxx = 0;
        while(i<k)
        { 
           min = std::min(height[i],height[k]);
           maxx = max(maxx,(k-i)*min);
            if(height[i] < height[k])
            {
                i++;
            }
            else
            {
               k--;
            }
        }
        return maxx;
    }
};