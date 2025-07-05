class Solution {
public:
    char kthCharacter(int k) {
        
        string word = "a";

        while(word.size() < k){
            int size = word.size();

            for (int i=0; i<size ;i++){

                if (word.size() >= k) break;

                char c = word[i];
                c=  (c == 'z') ? 'a' : c+1;
                word += c;
            }

        }

        cout<<word<<endl;
        return word[k-1];
    }
};