int can_ship(vector<int >weights, int w){
    int capacity = 0;
    int days=0;

    for (int i : weights){
        if ( (capacity + i) > w  ){
            capacity = i;
            days +=1;
        }
        else capacity +=i;

    }

    if (capacity > 0)  days+=1;

    return days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int maxi = 0;
        int result = INT_MAX;
        int sumy = 0;

        for (int i : weights){
            maxi = max(maxi, i);
            sumy += i;
        }

        int left = maxi;
        int right = sumy;
        int days_req ;
        int mid;

        while(left <= right){

            mid = (left + right) / 2;

            days_req = can_ship(weights,mid);

            cout<<days_req<<" ";

            if (days_req <= days){
                cout<<days_req<<" ";
                result = min(result, mid);
                right = mid-1;
            }
            else left = mid+1;

        }

        return result;

    }
};