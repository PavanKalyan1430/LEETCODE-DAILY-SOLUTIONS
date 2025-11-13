void fun(vector<string>& result, string temp, int n, int open, int close) {
  if (temp.size() == 2*n){
    result.push_back(temp);
    
  }

  if (open < n){
    fun(result, temp+'(', n , open+1, close);
   // return ;
  }

  if (open > close){
    fun(result, temp+')', n , open , close+1);
  //  return ;
  }
}


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp = "";
        fun(result, temp, n, 0, 0);

        return result;
    }
};