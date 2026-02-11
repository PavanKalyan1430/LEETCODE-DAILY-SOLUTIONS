void fun(int n , string& temp, int i, vector<string>& result){
        
    if (i == n){
        result.push_back(temp);
        return;
    }

    //not pick case
    if (temp.empty() || temp.back() != '0'){
        temp += '0';
        fun(n, temp, i+1, result);
        temp.pop_back();
    }

    //pick case
    temp += '1';
    fun(n, temp, i+1, result);
    temp.pop_back();

    return;










}



class Solution {
public:
    vector<string> validStrings(int n) {
        
        vector<string> result;
        string s = string(n,'0');
        string temp = "";
        
        fun(n, temp, 0 , result);
        
        return result;
    }
};