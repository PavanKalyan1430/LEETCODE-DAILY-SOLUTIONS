class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        bool even = false;

        (nums[0] % 2 == 0) ? even = true : even = false;

        if (even){

            int min_odd = INT_MAX;

            for (int i=1 ; i<nums.size(); i++){
                if (nums[i] % 2 == 1){
                    if (min_odd == INT_MAX) return false;
                    int ele = nums[i] - min_odd;
                    if (ele < 1 ||  (ele %2 == 1 )) return false;             
                    min_odd = min(min_odd, nums[i]);
                }
            }
            return true;

        }

        
            int min_odd = nums[0];

            for (int i=1 ; i<nums.size(); i++){
                if (nums[i] % 2 == 0){
                    if (min_odd == INT_MAX) return false;
                    int ele = nums[i] - min_odd;
                    if (ele < 1 ||  (ele %2 == 0 )) return false;            
                    min_odd = min(min_odd, nums[i]);
            }
        }

        return true;
        

        // if (nums[0] % 2 == 0) even = true;   // we need to change the whole array to even
        // else even = false;   // we need to change the whole array to odd

        // bool even_found= false ,odd_found = false;

        // if (even) even_found = true;
        // else odd_found = true;

        // for (int i=1; i<nums.size(); i++){
        //     if (even && nums[i] % 2 != 0 && odd_found == false ) return false;
        //     else if (!even && nums[i] % 2 == 0 && odd_found == false) return false;

        //     if (nums[i] % 2 == 0) even_found = true;
        //     else odd_found = true;
        // }

        // return true;


    }
};