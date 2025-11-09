class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
       
       int result = 0;
       int cnt;

       for (int i=0; i<nums.size(); i++){
            cnt = 0;
            for (int j=i; j<nums.size(); j++){

                if (nums[j] == target) cnt+=1;

                if (j-i+1 < (2 * cnt) ) result +=1;

            }

        
       }

       return result;

    }
};