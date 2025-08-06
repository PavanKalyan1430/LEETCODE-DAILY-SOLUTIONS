class Solution {
public:
    int totalFruit(vector<int>& nums) {
        
        unordered_map <int,int> m;
        int left = 0;
        int count = 0;
        int result = 0;

        for (int right = 0; right<nums.size(); right++){

            m[nums[right]]++;
            count++;

            while(m.size() >= 3){

                m[nums[left]]--;

                if (m[nums[left]] == 0) m.erase(nums[left]);

                left++;
                count--;
            }

            
            result = max(count, result);

        }

        return result;


    }
};