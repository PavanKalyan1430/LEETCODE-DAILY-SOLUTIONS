class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map <int , int> m;
        for (int i : nums) m[i]+=1;
        int n = nums.size()/2;

        for(int i=0; i<nums.size(); i++) {
            if (m[nums[i]] == n) return nums[i];
        }

        return 0;
    }
};