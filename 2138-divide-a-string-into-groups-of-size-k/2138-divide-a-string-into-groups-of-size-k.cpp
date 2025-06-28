class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        string result = "";
        int count=0;
        vector <string > vec;
        
        for (int i=0 ; i<s.size(); i++){
            result += s[i];

            if (result.size() == k or i== s.size()-1){
                vec.push_back(result);
                result = "";
            }
        }

            while((vec.back()).size() != k){
                vec.back() += fill;
            }

           

        



        // for (auto i: vec) cout<<i<<" ";

        return vec;
    }
};