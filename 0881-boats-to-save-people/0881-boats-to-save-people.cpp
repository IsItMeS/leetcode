class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count =0,l=0;
        int n = people.size()-1;
        sort(people.begin(),people.end());
        while(l<= (n) )
        {
            if((people[l] + people[n]) <= limit)
            {
                l++;
                n--;
                count ++;
            }
            else {
            n--;
            count++ ;
            }

        }
        return count;
    }
};