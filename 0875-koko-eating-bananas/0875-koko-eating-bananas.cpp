long long can_eat(vector<int> &piles, int banana_per_hour ){

    long long hours = 0;

    for ( int i : piles){
         hours += ( (i + banana_per_hour -1) / banana_per_hour);
    }

    return hours;

}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int mid;

        long long hours;
        int result = INT_MAX;

        while ( left <= right){

            mid = ( left + right ) / 2;

            hours = can_eat(piles, mid);

            if ( hours <= h){
                result = min(result , mid);
                right = mid-1;
            }

            else left = mid+1;


            
        }

        return result;


    }
};