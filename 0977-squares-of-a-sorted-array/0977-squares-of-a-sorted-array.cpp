class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        
        int left = 0;

        int n = nums.size();

        int right = n-1;

        int index = n-1;

        vector<int> result(n);

        while (left <= right){

            int l = abs(nums[left]);
            int r = abs(nums[right]);

            int num = max(l , r);

            result[index--] = num * num;

            if (l <= r) right--;

            else left++;

        }

        return result;


    }
};