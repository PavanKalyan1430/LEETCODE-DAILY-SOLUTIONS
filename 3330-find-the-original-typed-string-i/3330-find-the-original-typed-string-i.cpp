class Solution {
public:
    int possibleStringCount(string word){
        unordered_map<char,int> m;
        int count=0;
        char temp = word[0];
        for (int i=1; i<word.size(); i++){
            if (word[i]==temp){
                count+=1;
            }
            else {
                temp = word[i];
            }
        }
        // for (int i=0; i<word.size(); i++){
        //     m[word[i]]++;}
        
        // for (auto i: m){
        //     if (i.second > 1){
        //     count+=i.second-1;
        //     }
        // }

            return count+1;
        
    }
        
};