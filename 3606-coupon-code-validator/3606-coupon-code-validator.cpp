class Solution {
public:
    vector<string> validateCoupons(vector<string>& c, vector<string>& b, vector<bool>& a) {
        

        map<pair<string, string>, vector<string>> m;

        for (int i=0; i<c.size(); i++){
            
            if (a[i] and c[i] != "" and b[i] !="invalid"){
                int flag = 1;

                for (int j=0; j<c[i].size(); j++){
                    if (c[i][j]!= '_' and !isalnum(c[i][j])) flag = 0;
                }

                if (flag) m[{b[i] , c[i]}].push_back(c[i]);
            }
        }

        vector<string> ans;

        for (auto &p : m) {
            for (string &s : p.second) {
                ans.push_back(s);
            }
        }

        return ans;


        


    }
};