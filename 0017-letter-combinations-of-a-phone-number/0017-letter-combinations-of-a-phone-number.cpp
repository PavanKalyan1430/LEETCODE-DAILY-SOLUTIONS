void fun(vector<string> &result, string&digits, string &temp, 
    unordered_map <char,vector<char>> &m, int idx){
        
        
        if (idx == digits.size()){
            result.push_back(temp);
            return;
        }
        
        for (int i= 0; i<m[digits[idx]].size(); i++){
            
            char num = digits[idx];
            char  c =  m[num][i]; 
            
            temp += c;
            fun(result, digits, temp, m, idx+1);
            temp.pop_back();
            
        }
        
        return;
        
        
}




class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        unordered_map <char , vector<char>> m;

        //m.insert( {key : value})

        m.insert({'2', {'a', 'b', 'c'}});
        m.insert({'3', {'d', 'e', 'f'}});
        m.insert({'4', {'g', 'h', 'i'}});
        m.insert({'5', {'j', 'k', 'l'}});
        m.insert({'6', {'m', 'n', 'o'}});
        m.insert({'7', {'p', 'q', 'r', 's'}});
        m.insert({'8', {'t', 'u', 'v'}});
        m.insert({'9', {'w', 'x', 'y', 'z'}});

      vector<string > result;
      string temp = "";
      fun(result, digits, temp, m, 0);

      return result;
}


       
        



    

    
};