class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());


        int left = 0, maxlen = 0;

        for (int right =0; right<nums.size(); right++){

            while(nums[right] > 1LL *nums[left]*k){
                left +=1;
            }

            maxlen = max(maxlen, right-left+1);

        }

        return nums.size()- maxlen;

    }
};