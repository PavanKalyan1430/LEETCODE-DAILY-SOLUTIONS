void fun(vector<string>&result, int n , int open , int close, string& temp){

    if (2*n == temp.size()){
        result.push_back(temp);
        return;
    }

    if (open < n){
        temp += '(';
        fun(result, n, open+1, close, temp);
        temp.pop_back();
    }

     if (close < open){
        temp += ')';
        fun(result, n, open, close+1, temp);
        temp.pop_back();
    }

    return;

    


    
    


}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> result;

        int open = 0, close = 0;
        string temp = "";
        fun(result ,n ,open , close, temp);
        return result;
    }
};