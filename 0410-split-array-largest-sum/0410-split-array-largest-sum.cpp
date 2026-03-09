bool can_split(vector<int>&nums, int k, int sum){

    int splits = 0;
    int split_sum = 0;

    for (int i : nums){
        if (split_sum + i > sum){
            splits +=1;
            split_sum = i;
        }
        else split_sum +=i;
    }

    if (split_sum > 0) splits+=1;

    return splits <= k;

}


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

       int left = *max_element(nums.begin(), nums.end());
       int right = accumulate(nums.begin(), nums.end(), 0);
       int result = -1;

       while (left<= right){

            int mid =  (left + right ) / 2;

            if (can_split(nums, k, mid)){
                result = mid;
                right = mid-1;
            }
            else left = mid+1;

       }

       return result;

    }
};