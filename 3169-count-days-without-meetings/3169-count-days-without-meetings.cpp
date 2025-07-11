class Solution {
public:
    int countDays(int days, vector<vector<int>>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        
        result.push_back(nums[0]);
        vector<int> last_interval;

        for (int i= 1; i<nums.size(); i++){

             last_interval = result.back();

             if (nums[i][0] <= last_interval[1]){
                last_interval[1] = max(nums[i][1], last_interval[1]);

                result.back() = last_interval;
             }

             else result.push_back(nums[i]);

        }

        int ans = 0;

       
        for (auto interval : result){
            ans = ans + (interval[1] - interval[0] ) +  1;
        }

        cout<<ans;

        return days - ans;
    }
};