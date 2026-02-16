class Solution {
public:
    int reverseBits(int n) {

        bitset<32> b(n);
        string bin = b.to_string();

        reverse(bin.begin(), bin.end());

        int num = stoi(bin , nullptr, 2);

        return num;
    }
};