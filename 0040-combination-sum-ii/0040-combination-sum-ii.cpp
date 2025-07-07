void fun(vector<vector<int>> &result, vector<int>&temp, vector<int>& nums, int target, int start){

      if(target < 0) return;

      else if(target == 0)  result.push_back(temp);

      else{
             for (int i=start ; i<nums.size(); i++){
                
                if (i > start and nums[i] == nums[i-1]) continue;

                temp.push_back(nums[i]);
                fun(result, temp, nums, target-nums[i], i+1);      
                temp.pop_back();}
      }

                
    

   
    

    
 
}


class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        vector<vector<int>> result ;
        vector<int> temp;

        int start = 0;

        sort(nums.begin(), nums.end());

        for(int i: nums) cout<<i<<" ";
        fun(result, temp, nums, target, start);

        return result;


    }
};