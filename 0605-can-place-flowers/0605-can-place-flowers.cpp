class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num=flowerbed.size();
        int i,j;
        int count=0;
        if(n==0)
        return true;
        for(i=0;i<num;i++)
        {
            if(flowerbed[i]==0)
            {
                count++;
            }
        }
        if (n>count)
        return false;

        for (i=0;i<num;i++)
        {
            if((i==0 || flowerbed[i-1]==0) && (i==num-1 || flowerbed[i+1]==0) && flowerbed[i]==0)
            {
                flowerbed[i]=1;
                n--;
            }
            if (n==0)
            return true;
        }
        return false;
    }
};