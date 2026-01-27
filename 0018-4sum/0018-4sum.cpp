class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        int n = nums.size();

        for (int i=0; i<n-3; i++){

            if (i != 0 && nums[i] == nums[i-1]) continue;

            int ele = nums[i];
            int j = i+1;

            for (; j<n-2; j++){

                if ( j != i+1 && nums[j] == nums[j-1]) continue;

                int left = j;
                int mid = j+1;
                int right = n-1;

                while(mid < right){
                    long long sum =  (0LL + ele + nums[left] + nums[mid] + nums[right]);


                   // cout<< mid <<"   "<<right<<"    "<<sum <<"    "<<target<<endl;
                    if (sum == target){
                    result.push_back({ele, nums[left], nums[mid], nums[right]});

                        mid+=1;
                        right -=1;

                        while(mid < n-1 && nums[mid] == nums[mid-1]) mid+=1;
                        while(right > 0 && nums[right] == nums[right+1]) right-=1;


                    }

                    else if (sum < target) mid+=1;

                    else right -=1;
                }

            }

        }

        return result;
    }
};