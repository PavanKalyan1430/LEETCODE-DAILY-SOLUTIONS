class Solution {
public:
    int longestBalanced(string s) {
        
        int result = 0;

        for (int i=0; i<s.size(); i++){
            vector<int> freq (26, 0);

            for (int j = i; j<s.size(); j++){
                int c = s[j]-'a';
                freq[c]+=1;
                bool flag = true;

                for (int k =0; k<26; k++){
                    
                    if (freq[k] && freq[k] != freq[s[i]-'a']){
                        flag = false;
                        break;
                    }
                }

                if (flag) result = max(result, j-i+1);
            }

                
        }

        return result;
        
    }
};