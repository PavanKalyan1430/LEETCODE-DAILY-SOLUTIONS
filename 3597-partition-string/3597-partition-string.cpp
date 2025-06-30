class Solution {
public:
    vector<string> partitionString(string s) {
        
        unordered_map <string , int> m;
        vector <string> result;

        string str = "";

        for(int i=0; i<s.size(); i++){

             str += s[i];

            if (m.count(str) >= 1){
                //str+=s[i];
                continue;
            }

            else {
                m[str]++;
                result.push_back(str);
                str = "";}

        }



    return result;

    }
};