void fun (vector<vector<int>> &result , vector<int> &temp, vector<int> &nums, int target, int start){

    if (target <= 0) {
        
        if ( target == 0){
            result.push_back(temp);
        }
        return ;
    }


    for (int i= start ; i<nums.size(); i++){

        if (nums[i] > target) continue;
         temp.push_back(nums[i]);

         fun (result, temp, nums, target-nums[i], i);

          temp.pop_back();
          //fun(result, temp, nums, target, start+1);

    }

   

    

   
    


}



class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        vector <int> temp;
        int start = 0;
        fun (result , temp , nums , target, start);

        return result;

    }
};