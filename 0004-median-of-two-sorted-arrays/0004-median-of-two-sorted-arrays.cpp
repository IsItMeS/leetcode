class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i,m = nums1.size();
        int n= nums2.size();
        float med;
        vector<int> answer;
        for(i=0;i<m;i++)
        {
            answer.push_back(nums1[i]);
        }
        for(i=0;i<n;i++)
        {
            answer.push_back(nums2[i]);
        }
        sort(answer.begin(),answer.end());
        if((m+n)%2!=0)
        {
            med = (float)answer[(m+n)/2];
        }
        else
        med = (float)(answer[(m+n+1)/2] + answer[(m+n-1)/2])/2;
        return med;
    }
};