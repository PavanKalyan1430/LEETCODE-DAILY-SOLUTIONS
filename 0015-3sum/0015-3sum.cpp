class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i=0; i<nums.size()-1; i++){

            if (i!=0 && nums[i] == nums[i-1]) continue;

            int left = i;
            int mid = i+1;
            int right = n-1;

            while(mid < right){

                int ele = nums[left] + nums[mid] + nums[right];

                if ( ele == 0){
                    result.push_back({nums[left], nums[mid], nums[right]});
                    mid +=1;
                    right-=1;    
                       
                    while (mid < n && nums[mid] == nums[mid-1]) mid +=1; 
                    while (right > 0 && nums[right] == nums[right+1]) right-=1;
                }

                else if (ele < 0)  mid+=1;

                else right-=1;



            }
        }

        return result;

    }
};