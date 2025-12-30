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

                //cout<<"digit  "<<digit<<"  ";
                    result = (1LL * result * 10) + digit;

                    if (result > INT_MAX){
                        mark = 1; break;
                    }
                   
            }

            i++;

        }

        if (mark == 1 and sign == 1) return INT_MAX;
        else if (mark == 1 and sign == -1) return INT_MIN;

        return (int)result * sign;
        

    }
};