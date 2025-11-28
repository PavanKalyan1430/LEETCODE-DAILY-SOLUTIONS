class Solution {
public:
    char kthCharacter(int k) {
        
        string word = "a";

        while(word.size() < k){
            string w = "";
            for (int i=0; i<word.size(); i++){
                w += (word[i] + 1);
            }

            word += w;

        }

        //cout<< word;

        return word[k-1];

    }
};