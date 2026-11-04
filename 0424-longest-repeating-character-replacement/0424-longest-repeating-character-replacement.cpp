class Solution {
public:
    int characterReplacement(string nums, int k) {
        

        unordered_map <char , int> m;

        int max_freq  = 0, result  = 0;
        int left  = 0;
        char max_char;

        for (int right = 0; right<nums.size(); right++){

            m[nums[right]]+=1;

            if (m[nums[right]] >= max_freq){
                max_freq = m[nums[right]];
                max_char  = nums[right];
            }
            
            //max_freq = max(max_freq, m[nums[right]]);

            //diff  = (right- left + 1) - max_freq;

            while ( (right - left + 1) - (max_freq) > k){

                if (m[nums[left]] == max_char) max_freq -=1;
                m[nums[left]]-=1;
                left+=1;
            }

            result = max(result , right-left+1);

            

        }

        return result;



    }
};