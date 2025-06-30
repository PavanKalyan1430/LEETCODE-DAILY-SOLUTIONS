long long can_store(int bananas_per_hour, vector<int> piles) {

    long long hours = 0;;

    for (int i : piles){
        hours +=  ( ((i + bananas_per_hour)- 1) / bananas_per_hour);
    }

    return hours;


}


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0;

        for (int i: piles) maxi = max(maxi, i);

        int left = 1;
        int right = maxi;
        int mid;
        int   hours;
        int result = INT_MAX;

        while(left <= right) {


            mid = ( left + right ) / 2;


            hours = can_store(mid,piles);

            cout<<mid<<"   " << "hours :  "<< hours<<endl;

            if (hours <= h){
                
                result = min(result , mid);
                right = mid-1;

            }
            
            else left = mid+1;


        }

        return result;

    }
};