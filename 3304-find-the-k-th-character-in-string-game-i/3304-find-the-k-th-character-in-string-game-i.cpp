char fun(string &word, int k){

    if (word.size() >= k){
        return word[k-1];
    }

    string w = "";
    int sz = word.size();

    for (int i=0; i<sz; i++){
        w += (word[i] + 1);
    }
    word += w;

    return fun(word, k);
}


class Solution {
public:
    char kthCharacter(int k) {
        
        string word = "a";

        return fun(word, k);
    }
};