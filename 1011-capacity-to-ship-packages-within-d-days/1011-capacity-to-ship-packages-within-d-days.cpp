int can_ship(vector<int> &weights, int max_capacity_per_day){

    int total_days_req = 0;
    int capacity = 0;

    for (int i : weights){

        capacity += i;

        if (capacity >= max_capacity_per_day){

            if (capacity  > max_capacity_per_day){
                capacity = i;
            }

            else capacity = 0;

            if (capacity == max_capacity_per_day) total_days_req +=1;


            total_days_req += 1;
        }

    }

    if (capacity > 0) total_days_req +=1;

    return total_days_req;

}



class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left = *max_element(weights.begin(), weights.end());
        int sum = 0;
        int right = accumulate(weights.begin(), weights.end(), sum);

        int mid;
        int total_days_req;
        int result = INT_MAX;


        while (left <= right){

            int mid = left + (right - left) / 2;

            total_days_req = can_ship(weights, mid);

            if (total_days_req <= days){
                result =   min(result, mid);
                right = mid-1;
            }

            else left = mid+1;


        }

        return result;

    }
};