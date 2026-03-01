class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        int mindiff  = INT_MAX, ans; 

        sort(nums.begin(), nums.end());

        for (int i=0 ; i<nums.size(); i++){

            if (i!=0 && nums[i] == nums[i-1]) continue;

            int left = i;
            int mid =  i+1;
            int right = n-1;

            while (mid < right){
                int sum = nums[left] + nums[mid] + nums[right];
                int diff = abs (target - sum);

                if (diff < mindiff){
                    mindiff = diff;
                   // cout<<nums[left] << "  "<<nums[mid]<< "   "<<nums[right]<<endl;
                    ans = sum;
                }

                if (sum == target) return target;

                else if (sum < target) mid+=1;

                else right-=1;
                
            }

            
        }

        return ans;
    }
};