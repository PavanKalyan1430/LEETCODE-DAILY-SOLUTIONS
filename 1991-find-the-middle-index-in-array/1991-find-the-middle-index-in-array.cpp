class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int t_sum = 0;
        
        int prefix_sum = 0;

        for (int i=0; i<nums.size(); i++){
            t_sum += nums[i];
        }

        cout<<t_sum;

        for (int i=0; i<nums.size(); i++){

            t_sum -= nums[i];

            if ( prefix_sum == t_sum) return i;

            prefix_sum += nums[i];

            


        }

        return -1;

    }
};