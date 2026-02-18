class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string> result;
        string res;


        for (int i=0; i<12; i++){

            int hours = __builtin_popcount(i);

            for (int j = 0; j<60; j++){

                int min = __builtin_popcount(j);

                if (hours + min == turnedOn){
                    res = "";

                    res += to_string(i);
                    res += ":";
                    if (j < 10) res += "0";
                    res += to_string(j);

                    result.push_back(res);
                }
            }
        }

        return result;
    }
};