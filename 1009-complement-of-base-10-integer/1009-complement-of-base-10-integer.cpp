class Solution {
public:
    int bitwiseComplement(int n) {
        
        string bin = "";

        if (n == 0) return 1;

        while (n > 0){
            char c = ( (n % 2) + '0');
            bin += c;
            n = n >> 1;
        }

        reverse(bin.begin(), bin.end());
        //cout<<bin;

        for (int i=0; i<bin.size(); i++){
            if (bin[i] == '0') bin[i] = '1';
            else bin[i] = '0';
        }

       // cout<<endl<<bin;

        int res = stoi(bin ,nullptr, 2);
        return res;
    }
};