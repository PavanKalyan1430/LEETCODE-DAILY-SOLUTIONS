void fun(vector<string>&result, string &temp, int i, int n, int open, int close){

    if (temp.size() == 2*n){
        result.push_back(temp);
        return;
    }

    if (open < n){
        temp.push_back('(');
        fun(result,  temp, i , n , open+1, close);
        temp.pop_back();


    }

    if ( close< open ){
        temp.push_back(')');
        fun(result,  temp, i , n , open, close+1);
        temp.pop_back();

    }
        
    return;

}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        

        vector<string> result;
        string temp = "";
        int start = 0;

        fun(result, temp, start, n, 0, 0);


        return result;


    }
};