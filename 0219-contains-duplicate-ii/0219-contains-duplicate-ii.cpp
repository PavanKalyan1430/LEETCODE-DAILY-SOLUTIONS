class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        

        unordered_set <int> sety;


        int left = 0;

        for (int right =0; right <nums.size(); right++){

            if (right - left > k){
                sety.erase(nums[left]);
                left+=1;
            }

            if (sety.count(nums[right])) return true;

            sety.insert(nums[right]);
 
        }

        return false;
    }
};