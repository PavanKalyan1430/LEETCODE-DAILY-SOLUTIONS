int can_store(vector<int> weights, int min_weight){
    int capacity = 0;
    int no_of_days= 0;

    for (int i : weights){
        if ( (capacity + i ) > min_weight){
            no_of_days +=1;
            capacity = i;
        }
        else capacity+=i;
    }

    if (capacity > 0) no_of_days +=1;

    return no_of_days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sumy = 0;
        int maxi = 0;

        for (int i: weights){
            sumy+= i;
            maxi = max(maxi, i);}

        int left = maxi;
        int right = sumy;
        int no_of_days;
        int result = INT_MAX;
        int mid;

        while (left <= right){
            mid = (left + right ) / 2;
            no_of_days = can_store(weights, mid);

            if (no_of_days <= days){
                result = min(result, mid);
                right = mid-1;
            }
            else left = mid+1;

            
        }

        return result;




    }
}; 