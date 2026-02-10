void fun(string &s , string &temp, vector<string> &result, int i){

    if ( i < 0){
        result.push_back(s);
        return;
    }

    if (isalpha(s[i])){
        
        char t = s[i];
        char c = s[i];
        if (islower(s[i])) c-= 32;
        else c+= 32;
       

        s[i] = c;
        fun(s, temp, result, i-1);

        s[i] = t;
        fun(s, temp, result, i-1);

    }

    else {
        fun(s, temp , result, i-1);
    }

}


class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        
        vector<string> result;

        int n = s.size();
        string temp = s;

        fun(s, temp, result, n-1);

        return result;

    }
};