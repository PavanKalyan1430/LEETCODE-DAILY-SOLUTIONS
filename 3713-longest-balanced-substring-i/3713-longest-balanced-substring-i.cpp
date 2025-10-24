


class Solution {
public:
    int longestBalanced(string s) {
        
        int result = 0;
        int flag;


        for (int i =0; i<s.size(); i++){
        unordered_map <char , int> m;

            for (int j =i; j<s.size(); j++){

                flag = 1;

                m[s[j]]++;

                int cnt = m[s[j]];

                for (auto k : m){
                    if (k.second != cnt){
                        flag = 0;
                        break;}
                }

                if (flag){
                    result = max(result , j-i+1);
                }


            }


        }

        return result;


    }
};