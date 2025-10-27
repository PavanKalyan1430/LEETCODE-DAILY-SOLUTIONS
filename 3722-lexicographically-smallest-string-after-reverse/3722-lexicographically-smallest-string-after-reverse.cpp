class Solution {
public:
    string lexSmallest(string s) {

        string result = s;
        
        for (int i=0; i<=s.size(); i++){

            string dup1 = s;
            string dup2 = s;

            reverse(dup1.begin(), dup1.begin()+i);

            reverse(dup2.end()-i, dup2.end());

            result = min(result, min(dup1, dup2));

        }

        return result;

    }
};