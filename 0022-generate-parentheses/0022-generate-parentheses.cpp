void fun( vector<string> &result , string temp, int n , int open , int close){

    if (temp.size() == 2*n) {
        result.push_back(temp);
        return ;
        }


    if (open < n){
        temp.push_back('(');
        fun(result, temp, n, open+1 ,close);
        temp.pop_back();}


    if (open > close){
        temp.push_back(')');
        fun(result, temp, n, open ,close+1);
         temp.pop_back();}


    //if (temp.size() == 2*n) temp.pop_back();

}  

class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string>  result;
        string temp = "";
        fun(result, temp, n, 0 ,0);

        return result;


    }
};