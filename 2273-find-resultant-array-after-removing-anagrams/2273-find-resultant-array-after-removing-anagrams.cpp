class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        vector <string> result ;
       
        result.push_back(words[0]);
        string lastword = words[0];
        sort(lastword.begin(), lastword.end());


        for (int i=1; i<words.size(); i++){

            string currentword = words[i];
            sort(currentword.begin(), currentword.end());
            

            if ( currentword ==  lastword ){
                i++;
            }
            else{
                result.push_back(words[i]);
                lastword = currentword;

            }
            
        }

        return result;
    }
    
};