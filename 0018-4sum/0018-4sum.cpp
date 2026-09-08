class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        

        // {-2,-1,-1,0,0,1,1,2}

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int sz = nums.size();


        for (int i=0; i<sz-3; i++){

            int st = i;

            if (i != 0 && nums[i] == nums[i-1]) continue;

            for (int j =i+1; j<sz-2; j++){

                if (j!=i+1 && nums[j] == nums[j-1]) continue;

                int left = j;
                int mid = j+1;
                int right = sz-1;

                //cout<<j<<" ";

                while (mid < right){
                    long long  sum = 0LL + nums[st] + nums[left] + nums[mid] + nums[right];

                //    cout<<sum <<endl;

                    if (sum  == target){
                        result.push_back({nums[st] , nums[left] , nums[mid] , nums[right]});

                        while (mid < right && nums[mid] == nums[mid+1]) mid+=1;
                        while (right > mid && nums[right] == nums[right-1]) right-=1;

                        mid +=1;
                        right-=1;
                    }

                    else if (sum < target) mid+=1;

                    else right-=1;
                }
            }  
        }

        return result;
    }
};