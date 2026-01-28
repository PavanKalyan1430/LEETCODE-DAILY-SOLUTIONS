class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int result = -1;
        int mindiff = INT_MAX;
        int n = nums.size();

        sort(nums.begin(), nums.end());


        for (int i=0; i<n-2; i++){

            if (i != 0 && nums[i] == nums[i-1]) continue;

            int left = i;
            int mid = i+1;
            int right = n-1;

            while (mid < right){
                int sum = nums[left] + nums[mid] + nums[right];

                int diff = abs (target - sum);

                if (sum == target) return 0 ;

                if (diff < mindiff){
                    result = sum;
                    mindiff = diff;
                }

                else if (sum > target){
                    //result = min(result , sum-target);
                    right-=1;
                }

                else{
                    //result  = min(result , target- sum);
                    mid +=1;
                }
            }
        }

        return result;
    }
};