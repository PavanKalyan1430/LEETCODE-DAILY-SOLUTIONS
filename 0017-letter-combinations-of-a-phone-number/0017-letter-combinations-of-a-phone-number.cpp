void fun(string &digits, vector<string>&result, unordered_map<char, string> &m, string & temp, int ind){

    if (ind == digits.size()){
        result.push_back(temp);
        return;
    }

    for (int i=0 ; i<m[digits[ind]].size(); i++){

        char dig = digits[ind] ;
        //cout<<dig<<" ";
        char c = m[dig][i];

       // cout<<c<<" ";

        temp.push_back(c);
        fun(digits, result, m, temp, ind+1);
        temp.pop_back();

    }

    return;



}


class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> result;

        unordered_map <char , string> m;

        m.insert({'2' , "abc"});
        m.insert({'3' , "def"});
        m.insert({'4' , "ghi"});
        m.insert({'5' , "jkl"});
        m.insert({'6' , "mno"});
        m.insert({'7' , "pqrs"});
        m.insert({'8' , "tuv"});
        m.insert({'9' , "wxyz"});

        int ind = 0;
        string temp = "";

        fun(digits,result,  m, temp, ind);

        return result;



    }
};