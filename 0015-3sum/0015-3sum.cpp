class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i=0; i<nums.size()-1; i++){
            int x = nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while (left < right ){
                if (nums[left] + nums[right] == -(x)){
                    cout<<nums[left] <<" "<<nums[right]<<" ";
                    res.push_back({x,nums[left],nums[right]});
                    break;
                }
                else if (nums[left] + nums[right] < -(x)) left+=1;

                else right-=1;
            }
        }
            sort(res.begin(), res.end());
            res.erase(unique(res.begin(), res.end()), res.end());

        return res;
    }
};