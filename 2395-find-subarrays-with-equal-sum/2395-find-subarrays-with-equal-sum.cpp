class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        unordered_map <int, int> m;
        int sum_count;
        int count = 0;

        for (int i=0; i<nums.size()-1; i++){

            sum_count = 0;

            for (int j=i; j<i+2; j++){
                sum_count += nums[j];
            }
            if (m.count(sum_count)) return true;
            else m[sum_count] =1;


        }

        return false;
    }
};