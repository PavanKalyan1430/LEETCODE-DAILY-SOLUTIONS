bool can_ship(vector<int>&nums, int cap, int D){
    int days = 0;
    int wt = 0;

    for (auto i : nums){
        if (wt + i > cap){
            days +=1;
            wt = i;
        }

        else wt+= i;
    }

    if (wt > 0) days +=1;

    return days<= D;
}


class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        int result;

        while (left <= right){
            int mid = (left+right)/2;

            if (can_ship(nums, mid, days)){
                result = mid;
                right = mid-1;
            }

            else left = mid+1;
        }

        return result;
    }
};