class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {

        int pos = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        int left ;
        int right;

        if (pos < nums.size() && nums[pos] == x){
            left = pos;
            right = pos+1;
        }

        else{
            left =  pos - 1;
            right = pos;
        }

        vector<int> result;
        int n = nums.size();



        while (k-- > 0){

            int a = INT_MAX , b= INT_MAX;

            if (left >= 0) a = abs(nums[left] - x);
            if (right < n) b = abs(nums[right] - x);

            if (a <= b){
                result.push_back(nums[left]);
                left-=1;
            }

            else{
                result.push_back(nums[right++]);
            }

        }
        sort(result.begin(), result.end());
        return result;

    }
};