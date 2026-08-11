class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int j = digits.size();

        for(int i = j - 1; i >= 0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};