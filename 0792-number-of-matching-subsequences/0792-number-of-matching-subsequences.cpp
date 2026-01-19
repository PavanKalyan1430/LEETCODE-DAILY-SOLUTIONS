class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        unordered_map <string , int> m;
        int cnt = 0;

        for (int i=0; i<words.size(); i++){

            int idx = 0;
            bool flag = true;

            if (m[words[i]] == 2){
                cnt +=1;
                continue;
            }

            for (int k=0; k<s.size(); k++){

                if (words[i][idx] == s[k]) idx +=1;

                if (idx == words[i].size()){
                    m[words[i]] = 2;
                    cnt +=1;
                    flag = false;
                    break;
                }

            }

            if (flag) m[words[i]] = 1;


        }

        return cnt;

    }
};