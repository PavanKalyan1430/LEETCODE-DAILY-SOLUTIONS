class Solution {
public:
    int myAtoi(string s) {
        
        long long  result = 0;
        int i =  0;
        int sign = 1;
        int digit;
        int mark = 0;

        while(i <s.size() and s[i] == ' ' )i++;


        if (s[i] == '-'){
            sign =  -1;
            i++;
        }
        else if (s[i] == '+'){
            sign =  1;
            i++;
        }


        while(i < s.size()){

            if (!isdigit(s[i])){
                break;
            }

            else{
                digit = s[i] - '0';

                    result = (1LL * result * 10) + digit;

                    if (sign == 1 && result>= INT_MAX) return INT_MAX;
                    else if (sign == -1 && -result <= INT_MIN) return INT_MIN;
                             
                   
            }

            i++;

        }

        return (int)result * sign;
        

    }
};