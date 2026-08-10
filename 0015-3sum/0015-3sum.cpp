class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (auto i : nums) cout<<i<<" ";
        cout<<endl;

        for (int i=0; i<nums.size()-2; i++){

           if (i > 0 && nums[i] == nums[i-1]) continue;

            int left = i;
            int mid = i+1;
            int right = nums.size()-1;


            while (mid < right){

                int sum = nums[left] + nums[mid] + nums[right];

                if (sum == 0){

                    result.push_back({nums[left], nums[mid], nums[right]});

                    while (mid < right && nums[mid] == nums[mid+1]) mid+=1;
                    while (right > mid && nums[right] == nums[right-1]) right-=1;

                    mid+=1;
                    right-=1;

                }

                else if (sum > 0) right-=1;

                else mid+=1;
            }



        }


        return result;


    }
};