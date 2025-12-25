class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        
        long long s = 0;
        int sub = 0;

        sort(nums.rbegin(), nums.rend());

        

        for (int i=0; i<k ; i++){
            
            if (nums[i] >= sub ){
                s+= (nums[i] - sub);
            }

            else s += 0;

            sub+=1;
        }

        return s;
    }
};