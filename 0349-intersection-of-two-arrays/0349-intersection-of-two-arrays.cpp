class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int i,j,k;
        vector<int> answer;
        vector<int> na;
        int n1=nums1.size();
        int n2=nums2.size();
        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {  
                 answer.push_back(nums1[i]);
                }
            }
        }
        for(int i = 0; i < answer.size(); i++)
        {
            bool duplicate = false;
            for(int j = 0; j < i; j++)
             {
                 if(answer[i] == answer[j])
                  {
                    duplicate = true;
                     break;
                    }
            }
            if(!duplicate)
                {
                     na.push_back(answer[i]);
                }
        }
        return na;
    }
};