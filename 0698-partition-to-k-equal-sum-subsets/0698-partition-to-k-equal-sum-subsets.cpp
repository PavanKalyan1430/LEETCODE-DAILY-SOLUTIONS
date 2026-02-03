bool fun( vector<int>&nums, int k ,vector<bool>&visit, int partsum , int currsum , int ind ){

        if (k == 1) return true;

        if (currsum == partsum) return fun(nums, k-1, visit, partsum, 0, 0);

        for (int i= ind; i<nums.size(); i++){
            if ( (currsum + nums[i]) > partsum ) break;

            if (visit[i]) continue;

            visit[i] = true;

            if (fun(nums, k, visit, partsum , currsum + nums[i], i+1) == true) return true;

            visit[i] = false;


        }

        return false;



}


class Solution {
public:
    bool canPartitionKSubsets(vector<int>&nums, int k) {
        
        sort(nums.begin(), nums.end());
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        

        if (totalsum % k != 0) return false;

        int n = nums.size();
        vector<bool> visit(n,false);

        int partsum = totalsum / k;
        int currsum = 0;
        int index = 0;


        if (nums.back() > partsum)  return false;
        return fun(nums, k, visit, partsum ,currsum , index);
    }
};