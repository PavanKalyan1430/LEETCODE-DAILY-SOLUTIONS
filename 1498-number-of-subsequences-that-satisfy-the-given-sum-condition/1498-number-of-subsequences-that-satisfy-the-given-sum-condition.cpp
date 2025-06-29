class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int left = 0;
        int right = nums.size()-1;
        int res = 0;
        long long  mod = 1e9 + 7;
        int power_2;
       
    vector <int> power (nums.size(),1);


    for (int i=1; i<nums.size(); i++){
        power[i] =( (power[i-1] * 2) % mod );
    }

        while (left <=right){
            
            if (nums[left] + nums[right] <= target) {
                res = ( res + (power[right - left]  ) )% mod;
                left++;
            }

            else right--;



        
            
        }
            

        cout<<res<<endl;

                for (int i: nums) cout<<i<<" ";

                

        return res;

    }
};