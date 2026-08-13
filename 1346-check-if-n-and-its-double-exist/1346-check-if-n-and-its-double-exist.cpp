class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i,j;
        int n= arr.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]== 2*arr[j])
                return true;
            }
            for(j=i+1;j<n;j++)
            {
                if(arr[j]== 2*arr[i])
                return true;
            }
        }
        return false;
    }
};