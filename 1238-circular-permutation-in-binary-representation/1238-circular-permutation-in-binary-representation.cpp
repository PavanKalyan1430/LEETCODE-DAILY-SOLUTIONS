class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        
        vector<int> gray_codes, result;

        int range = pow(2, n), idx;

        for (int i=0; i<range; i++){

            int num = i;
            num = num ^ (num>>1);
            gray_codes.push_back(num);
        }

        for (int i=0; i<range; i++){
            if (gray_codes[i] == start){
                idx = i;
                break;
            }
        }

        for (int i=0; i<range; i++){
            result.push_back(gray_codes[idx]);
            idx = (idx + 1) % range;
        }

        //for (auto i : gray_codes) cout<<i<<" ";

        return result;
    }
};