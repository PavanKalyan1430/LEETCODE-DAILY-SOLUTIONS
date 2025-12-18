class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, cnt = 0;
        int right = n-1;

        while (left < right){
            int k = nums[left] + nums[right];

            if (k >= target){
                int q = (right-left);

                cnt += q ;
                right -=1;
            }

            else left +=1;

            
        }

        return ( (n*(n-1) )/2 - cnt);


    }
};