class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size()-1;

        while (n >= 0 && digits[n] == 9){
            digits[n] = 0;
            n-=1;
        }

        if (n >= 0) digits[n] += 1;

        else digits.insert(digits.begin()+0,1);

        return digits;
    }
};