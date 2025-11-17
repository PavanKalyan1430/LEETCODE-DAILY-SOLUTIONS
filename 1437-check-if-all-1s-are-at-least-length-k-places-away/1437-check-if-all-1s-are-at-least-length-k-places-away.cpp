class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int t;
        int prev;

        for ( t=0; t<nums.size(); t++){
            if (nums[t] == 1){
                prev = t;
                break;
            }
        }

        t+=1;

        for (int i= t; i<nums.size(); i++){

            if (nums[i] == 1 && (i-1-prev) < k) return false;

            else if (nums[i] == 1 && (i-1-prev) >= k){
                prev = i;
            }

        }

        return true;


    }
};