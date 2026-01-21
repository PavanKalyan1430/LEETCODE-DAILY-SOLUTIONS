class Solution {
public:
    string multiply(string num1, string num2) {
        
        int n1 = num1.size() ; int n2 = num2.size();

    

        vector<int>result(n1+n2, 0);

        for (int i= n1-1; i>=0; i--){
            for (int j = n2-1; j>=0; j--){

                int mul = (num1[i]- '0' ) * (num2[j] - '0');

                int sum = mul + result[i+j+1];

                result[i+j+1] = (sum % 10);
                result[i+j]  +=  sum / 10;
             }
        }

        int k = 0;
        string ans = "";

        

        for (; k<result.size(); k++){
            if (result[k] != 0) break;
        }

        if (k == result.size()) return "0";

        for (; k<result.size(); k++) ans+= (result[k] + '0');
        return ans;
    }
};