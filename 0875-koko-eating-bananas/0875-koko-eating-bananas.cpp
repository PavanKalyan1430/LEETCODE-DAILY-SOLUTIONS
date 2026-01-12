long long hours_req(vector<int>&piles, int bananas_per_hour){

    long long total_hours = 0, h;

    for (int i : piles){
        h = (i + bananas_per_hour-1) / bananas_per_hour;

        total_hours += h;
    }

    return total_hours;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        long long time;
        int result ;

        while(left <= right){
            int mid = left + (right - left)/ 2;

            time= hours_req(piles, mid);

            if ( time <= h ){
                result = mid;
                right = mid - 1;
            }

            else left = mid +1 ;
            
        }

        return result;
    }
};