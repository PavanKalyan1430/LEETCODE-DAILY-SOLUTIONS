class Solution {
public:
    int myAtoi(string s) {
        
        string str = "";
        long long result = 0;
        int negative_flag = 1;
        int flag = 0;

        // Trim leading spaces
        for (char i : s){
            if (i != ' '){               
                str += i;
                flag = 1;
            }
            else if (flag) break;
        }

        cout << str << endl;
        int inc = 0;

        // negative sign
        if (str[0] == '-' ){
            negative_flag = -1;
            inc = 1;
        }
        
        else if (str[0] == '+'){
            inc = 1;
        }

        
        for (int i = inc; i < str.size(); i++){
            if (!isdigit(str[i])) break;

            int digit = str[i] - '0';

            // overflow prevention
            if (result > (INT_MAX - digit) / 10) {
                result = (negative_flag == 1) ? INT_MAX : INT_MIN;
                return result;
            }

            result = result * 10 + digit;
        }

        result = result * negative_flag;

      
       

        return result;
    }
};
