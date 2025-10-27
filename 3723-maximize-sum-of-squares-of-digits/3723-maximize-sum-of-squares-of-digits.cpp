class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string result = "";
        int addy = 0;

        if (num * 9 < sum)
            return "";

        int dup_sum = sum;
        addy = 0;

        // for (int j = 0; j < num; j++) {

            for (int i = 9; i >= 0; i--) {

                if (dup_sum - i >= 0) {
                    dup_sum -= i;
                    result += (i + '0');
                    addy += i;
                    i++;

                    if (result.size() == num and addy == sum)
                        return result;
                }
            
        }

        return result;
    }
};