class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& b, vector<bool>& active) {

        string word;
        int flag;
        vector <string> result;


        for (int i=0; i<b.size(); i++){
            for (int j=0; j<b.size()-1; j++){

                if (b[j] > b[j+1]){
                    swap(b[j], b[j+1]);
                    swap(code[j], code[j+1]);
                    swap(active[j], active[j+1]);
                }
            }
        }

        for (int  i=0; i<b.size(); i++){

            string word = code[i];

            if (active[i] and word.size()!=0 and b[i]!= "invalid"){
                flag = 1;
                for (int j=0; j<word.size(); j++){
                    if ( word[j] != '_' and !isalnum(word[j])) {
                        flag = 0;
                        break;
                    }
                }

                if (flag) result.push_back(word);
            }

        }
       // sort(result.begin(), result.end());
        return result;
        
    }
};