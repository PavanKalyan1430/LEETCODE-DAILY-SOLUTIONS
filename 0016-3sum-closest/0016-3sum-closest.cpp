class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        // {-2,-1, 1,2,3}

        // target = 3      {2,1,-1} => 2    {-2,3,2} => 3   {-2,-1,1}=> -2   

       // difference  =  abs(sum - target)


        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        int result = 0;
        int sz = nums.size();


        for (int i=0; i<sz-2; i++){

            if (i != 0 && nums[i] == nums[i-1]) continue;

            int left = i;
            int mid = i+1;
            int right = sz-1;

            while (mid < right){
                int sum = nums[left] + nums[mid] + nums[right];

                if (sum == target) return sum;

                else if (abs(sum - target) <min_diff){

                    min_diff = abs(sum - target);
                    result = sum;

                }

                if (sum < target) mid+=1;
                else right-=1;

                      
            }

       }

       return result;
  

    }
};