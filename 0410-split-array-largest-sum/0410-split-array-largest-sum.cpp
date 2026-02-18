int split(int split_sum , vector<int>&nums){

    int cnt  = 0;
    int sum = 0;


    for (int i=0; i<nums.size(); i++){

        if (sum  + nums[i] > split_sum){
            cnt +=1;
            sum = nums[i];
        }

        else sum += nums[i];
    }


    if (sum > 0) cnt +=1;
    //cout<<split_sum << "   "<<cnt<<endl;

    return cnt;


}



class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        int result = 0;

        while(left <= right){
            int mid = (left + right) / 2;

            if (split(mid, nums) <= k){
                result = mid;
                right = mid -1;
            }

            else left = mid + 1;
        }

        return result;
        
    }
};