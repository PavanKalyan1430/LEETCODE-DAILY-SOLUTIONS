class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        
        string s = "";
        int cnt = 0;

        for (int i=0; i<nums.size(); i++){
            s+= to_string(nums[i]);
        }

      //  cout<<s<<" ";

        for (int i=0; i<s.size(); i++){
            cnt += ( (s[i] - '0') == digit)  ? 1 : 0;
        }

        return cnt;

    }
};