bool can_place(vector<int>&nums, int m , int k , int day){

    int d = 0;
    int boque = 0;

    for (int i=0; i<nums.size(); i++){

        if (nums[i] <= day){
            d+=1;
            
            if (d == k){
                boque+=1;
                d=0;
            }
        }

        else d = 0;
    }

    return boque >= m;
}


class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        
        int n = nums.size();
        int result = -1;

        if (n < 1LL*m*k) return -1;

        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());

        while (left <= right){
            int mid = (left+right)/2;

            if (can_place(nums, m, k, mid)){
                result = mid;
                right = mid-1;
            }
            else left = mid+1;
        }

        return result;
        
    }
};