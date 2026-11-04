class Solution {
public:
    int maxVowels(string nums, int k) {
        
        unordered_set <char> sety = {'a', 'e', 'i', 'o', 'u'};

        int result  = 0;

        int left  = 0, v_count = 0;
        


        for (int right = 0 ; right<nums.size(); right++){

            if (sety.count(nums[right])){
                v_count  += 1;
            }

            if (right-left+1 > k){

                if ( sety.count(nums[left]) ){
                    v_count -=1;
                }

                left+=1;
            }

            result = max(result , v_count); 


        }

        return result;
    }
};