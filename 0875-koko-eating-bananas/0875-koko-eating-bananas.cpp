long long can_eat(vector<int>& nums,  int ban_per_hour){

    long long time = 0;

    for (int i=0; i<nums.size(); i++){
        time += (nums[i] + ban_per_hour-1) / ban_per_hour;
    }

    return time;

}

class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        
        
        int maxi = INT_MIN;

        for (int i : nums) {
            maxi = max(maxi,i);
        }

        int left = 1;
        int right = maxi;
        int mid ;
        int result = INT_MAX;
        long long hour_time;

        while (left <= right){
            
            mid = (left + right ) / 2;

            hour_time = can_eat( nums,mid);

            if (hour_time <= h) {
                result = min(result, mid);
                right = mid-1;
            }

            else left = mid+1;



            

        }

        return result;

    }
};