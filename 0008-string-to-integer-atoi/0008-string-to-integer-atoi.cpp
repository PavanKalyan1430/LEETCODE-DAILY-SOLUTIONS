class Solution {
public:
    int myAtoi(string s) {
        
        int result = 0;
        int i =  0;
        int sign = 1;
        int flag = 0;
        int digit;
        int mark = 0;

        while(i <s.size() and s[i] == ' ' )i++;

        //cout<<i;

        if (s[i] == '-'){
            sign =  -1;
            i++;
        }
        else if (s[i] == '+'){
            sign =  1;
            i++;
        }

       // cout<<i<<" ";

        while(i < s.size()){

            if (!isdigit(s[i])){
                break;
            }

            else{
                digit = s[i] - '0';

                cout<<"digit  "<<digit<<"  ";

                if ( (INT_MAX - digit) / 10 >= result){

                    result = (result * 10) + digit;
                    cout<<result<<endl;
   
                } 

                else mark = 1;
            }

            i++;

        }

        if (mark == 1 and sign == 1) return INT_MAX;
        else if (mark == 1 and sign == -1) return INT_MIN;

        return result * sign;
        

    }
};