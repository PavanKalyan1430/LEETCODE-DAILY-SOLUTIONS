class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        vector<int> left, right;
        int lmin = 100, rmin = 100;
        int n = nums.size()-1;
        int sum  = INT_MAX;

        for (int i=0; i<nums.size(); i++){
            lmin = min(lmin, nums[i]);
            left.push_back(lmin);

            rmin = min(rmin , nums[n  - i]);
            right.push_back(rmin);
        }



        reverse(right.begin(), right.end());


        // for (int i : left) cout<<i<<" ";
        // cout<<endl;

        // for (int i : nums) cout<<i<<" ";
        // cout<<endl;

        // for (int  i : right) cout<<i<<" ";

        for (int i=1; i<n; i++){

            if (nums[i] > left[i-1] && nums[i] > right[i+1]){

                sum = min(sum , left[i-1] + nums[i]+ right[i+1]);

            }
        }

        return (sum == INT_MAX) ? -1 : sum ;
    }
};