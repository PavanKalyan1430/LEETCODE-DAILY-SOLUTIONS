class Solution {
public:
    int titleToNumber(string str) {
        
        int result = 0;

        for (int i=0; i<str.size(); i++){
            result = (result * 26 ) +  str[i]- 64;
        }

        return result;

    }
};