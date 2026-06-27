class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int left=0; left<nums.size(); left++){

            int l = nums[left];

            if (left!= 0 && nums[left] == nums[left-1]) continue;

            int mid = left+1;
            int right = nums.size()-1;


            while (mid < right){
                int m = nums[mid];
                int r = nums[right];
                int total = l + m + r;

                if (total == 0){
                    result.push_back({l,m,r});
                    
                    while(right > mid && nums[right] == nums[right-1]) right-=1;
                    while (mid < right && nums[mid] == nums[mid+1])  mid+=1;

                    mid+=1;
                    right-=1;
                }

                else if (total > 0) right-=1;

                else mid+=1;

            }




        }
            return result;
    }
};