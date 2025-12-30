class Solution {
public:
    bool checkValidString(string s) {
        
        int open = 0, close = 0;
        int flag = 0;

        for (int i=0;i <s.size(); i++){

            if (s[i] == '(') open +=1;
            else if (s[i] == ')') close +=1;
            else flag = 1;

            if (open < close){
                if (!flag)  return false;
                else{
                    flag = 0;
                    open+=1;}
            } 

        }
        
        if (open == close) return true;

        if (open + flag == close)return true;
        else if (abs(open - flag) == close) return true;

        return false;

    }
};