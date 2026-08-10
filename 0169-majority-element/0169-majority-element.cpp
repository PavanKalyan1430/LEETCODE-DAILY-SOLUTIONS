class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0;
        int ans = -1;


        for (int i=0; i<nums.size(); i++){

            if (cnt == 0){
                ans  = nums[i];
                cnt ++;
            }

            else if (ans == nums[i]) cnt++;

            else cnt-=1;

        }

        return ans;


    }
};