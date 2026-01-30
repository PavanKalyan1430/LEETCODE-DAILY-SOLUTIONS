class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        // cout<<nums[1];

    

        for (int i=0; i<nums.size(); i++){

            int comp = target - nums[i];

            int left = i+1;
            int right = n-1;  

            while(left <= right){
                int mid = (left + right)/2;

                if (nums[mid] == comp) return {i+1, mid+1};

                else if (nums[mid] > comp) right = mid-1;

                else left = mid+1;
            }


        }

        return {-1,-1};

    }
};