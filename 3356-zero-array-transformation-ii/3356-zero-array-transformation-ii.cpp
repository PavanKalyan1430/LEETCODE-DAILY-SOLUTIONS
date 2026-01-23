bool can_possible(vector<int>nums, vector<vector<int>>&queries , int q){

    vector<int> diff (nums.size()+1 , 0);

     for (int i=0; i<q; i++){   
            int l = queries[i][0];
            int r = queries[i][1];
            int v = -queries[i][2];

            
            diff[l] += v;
            diff[r+1] += -v;
        }
        
        for (int i=1; i<diff.size(); i++){
            diff[i] += diff[i-1];
        }
        
        for (int i=0; i<diff.size()-1 ; i++){
            nums[i] += diff[i];
            if (nums[i] > 0) return false;
        }

        return true;

}

class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        int q = queries.size();

        int ind = 0;

        while (ind < nums.size() && nums[ind] <= 0 ) ind+=1;
        if (ind == nums.size()) return 0;


       // if (can_possible (nums , queries, q) == false) return -1;


        int left = 1;
        int right = q;
        int ans = -1;

        while(left <= right){
            int mid = (left + right) / 2;

            if (can_possible(nums, queries, mid)){
                cout<<mid<<" ";
                ans = mid;
                right = mid -1;
            }

            else left = mid + 1;
        }

        return ans;


    }
};