class Solution {
public:
    int characterReplacement(string nums, int k) {
        
        unordered_map <char, int> m;
        int left = 0;
        int replace_count = 0;

        int maxi = 0;
        int max_freq = 0;

        for (int right =0; right<nums.size(); right++){

            m[nums[right]]++;
            max_freq = max(max_freq, m[nums[right]]);

            while ( (right - left + 1) - max_freq  > k){
                m[nums[left]]--;
                left++;

            }

            maxi = max(maxi , right-left+1);
        }

        return maxi;

    }
};