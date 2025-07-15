class Solution {
public:
    bool isValid(string word) {
        
        if (word.size() < 3) return false;
        vector <int> check = {'a', 'e', 'i' ,'o','u'};

        int v_flag = 0;
        int c_flag = 0;

        for (int i=0; i<word.size(); i++){
            
            if (isalnum(word[i])){

                if (isdigit(word[i])) continue;

                else if (find(check.begin(), check.end(), tolower(word[i])) != check.end()){
                    v_flag = 1;
                }

                else c_flag = 1;
            }
            else return false;
        }

        return c_flag && v_flag;
    }
};