class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int mindiff = INT_MAX;
        int closest;

        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size()-2; i++){

            int left = i;
            int mid = i+1;
            int right = nums.size()-1;

            while(mid < right){
                
                int ele = nums[left] + nums[mid] + nums[right];

                if (ele == target) return ele;

                int diff = abs(ele - target);

                if (diff < mindiff){
                    mindiff = diff;
                    closest = ele;
                }

                if (ele < target) mid++;
                else right--;


            }

        }

            return closest;

    }
};