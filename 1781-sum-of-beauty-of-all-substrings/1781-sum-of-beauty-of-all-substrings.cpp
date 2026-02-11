class Solution {
public:
    int beautySum(string s) {
        
        int result = 0;

        for (int i=0; i<s.size(); i++){

            vector<int> v(26, 0);   
            for (int j=i; j<s.size(); j++){
               char c = s[j] - 'a';

               int mini = INT_MAX , maxi = 0;
               v[c]+=1;


               for (int k = 0; k<26; k++){
                    if (v[k] > 0){
                        mini = min(mini, v[k]);
                        maxi = max(maxi, v[k]);
                    }
               }

               result += (maxi - mini);

            }

        }

        return result;
    }
};