class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        
        vector <int> p_sum(nums.size()+1);
        p_sum[0] = 0;
        int sumy = 0;

        int odd_sum = 0;

        for (int i=0; i<nums.size(); i++){
            sumy += nums[i];

            p_sum[i+1] = sumy;
        }


        for (int i : p_sum) cout<<i<<" ";


        for (int i=1; i<p_sum.size(); i++){
            for (int j=i; j<p_sum.size(); j++){

                if ( (j - i) % 2 == 0){
                    odd_sum += (p_sum[j] - p_sum[i-1]);
                }

            }
        }

        return odd_sum;

    }
};