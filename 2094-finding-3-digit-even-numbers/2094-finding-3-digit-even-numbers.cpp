void fun(vector<int>& nums, vector<int> &result, int digcnt, int number, 
    vector<bool>& used) {

    if (digcnt == 3){
        if ( number % 2 == 0) result.push_back(number);
        return;
    }

    for (int i= 0 ; i<nums.size(); i++){
        
        if (used[i]) continue;
        if (digcnt == 0 && nums[i] == 0) continue;
        if (i != 0 && nums[i] == nums[i-1] && !used[i-1]) continue;

        used[i] = true;
        fun(nums, result, digcnt+1, number*10 + nums[i] , used);
        used[i]= false;

    }

}


class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0;

        vector<bool> used(n,false);

        vector<int> result;
        int digcnt = 0;

        fun(nums, result, digcnt, 0, used);

        return result;
    }
};