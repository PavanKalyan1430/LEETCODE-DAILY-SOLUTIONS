void fun(vector<string>&result, string &temp, int n , int open, int close){

    if ( (2 * n ) == temp.size()){
        result.push_back(temp);
        return;
    }

    if (open < n){
        temp += '(';
        fun(result, temp, n, open+1, close);
        temp.pop_back();
    }

    if (close < open){
        temp += ')';
        fun(result, temp, n, open, close+1);
        temp.pop_back();
    }

    return;

}


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> result;
        string temp = "";

        int open = 0;
        int close = 0;

        fun(result, temp, n, open , close);

        return result;
    }
};