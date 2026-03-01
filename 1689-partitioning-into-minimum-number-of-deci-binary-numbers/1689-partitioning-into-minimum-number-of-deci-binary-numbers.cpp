class Solution {
public:
    int minPartitions(string s) {
        
        int maxi = 0;

        for (int i=0; i<s.size(); i++){
            int k = s[i] - '0';
            maxi = max(maxi , k);
        }
        return maxi;
    }
};