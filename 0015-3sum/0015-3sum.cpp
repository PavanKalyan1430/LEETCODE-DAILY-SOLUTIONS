class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();

        for (int i=0; i<nums.size()-2; i++){
            
            if (i!= 0 && nums[i] == nums[i-1]) continue;


            int left = i;
            int mid = i+1;
            int right = n-1;

            while (mid < right){
                int sum = nums[left] + nums[mid] + nums[right];

                if (sum == 0){
                    result.push_back({nums[left], nums[mid], nums[right]});


                    while (mid < right && nums[mid] == nums[mid+1]) mid+=1;
                    while (mid > right && nums[right] == nums[right-1]) right-=1;

                    mid+=1;
                    right-=1;


            
                }

                else if (sum < 0) mid+=1;

                else right -=1;
            }

            
        }

        return result;



    }
};