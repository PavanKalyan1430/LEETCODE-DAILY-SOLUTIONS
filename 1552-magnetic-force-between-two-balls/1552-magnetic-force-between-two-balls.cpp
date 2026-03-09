bool can_place(vector<int>&nums, int k, int dis){
    
    int cnt = 1;
    int last_stall = nums[0];
    
    for (int i=1; i<nums.size(); i++){
        if (nums[i] - last_stall >= dis){
            cnt+=1;
            last_stall = nums[i];
        }
        
    }
    
    return cnt >= k;
    
}



class Solution {
public:
    int maxDistance(vector<int>& nums, int k) {
        int n = nums.size();
        int result = 0;
        sort(nums.begin(), nums.end());
        
        int left = 1;
        int right = nums.back()- nums[0];
        
        while (left <= right){
            int mid = (left+right)/2;
            
            if ( can_place(nums, k, mid)){
                result = mid;
                left = mid+1;
            }
            else right = mid-1;
        }
        
        return result;
        
        
    }
};