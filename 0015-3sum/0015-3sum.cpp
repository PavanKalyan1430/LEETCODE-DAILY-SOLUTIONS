class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int i=0; i<nums.size()-2; i++){

            if (i!= 0 and nums[i] == nums[i-1]) continue;

            int left = i;
            int mid = i+1;
            int right = nums.size()-1;

            while (mid < right){

                int element = nums[left] + nums[mid] + nums[right];

                if (element == 0){
                    result.push_back({nums[left], nums[mid], nums[right]});
                    
                    // int m = mid+1;
                    // int r = right+1; 

                    while(mid+1 < right and nums[mid] == nums[mid+1]) mid+=1;

                    while(right-1 >mid and nums[right] == nums[right-1]) right-=1;

                    mid+=1;
                    right-=1;

                    
                }

                else if (element > 0) right-=1;

                else mid+=1;
            }

        }
            return result;
    }
};