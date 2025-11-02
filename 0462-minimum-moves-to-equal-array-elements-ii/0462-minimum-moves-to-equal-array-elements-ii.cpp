class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int result = 0;

        int n = nums.size()/2;
        int ele = nums[n];

        for (int i=0; i<nums.size(); i++){
            result += abs(nums[i] - ele);
        }
        
        return result;
    }
};