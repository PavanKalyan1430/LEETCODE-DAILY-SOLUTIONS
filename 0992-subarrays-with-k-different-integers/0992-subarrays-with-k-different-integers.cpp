int fun(vector<int>&nums, int k){

    int left = 0; 
    int cnt = 0;

    unordered_map <int,int> m;

    for (int right=0; right<nums.size(); right++){

        m[nums[right]]+=1;

        while (m.size() > k){
            m[nums[left]] -=1;

            if (m[nums[left]] == 0) m.erase(nums[left]);
            left+=1;
        }

        cnt += (right-left+1);
    }

    

    return cnt;

}


class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        int cnt_k = fun(nums , k);
        int cnt_k_minus_1 = fun(nums, k-1);

        return cnt_k - cnt_k_minus_1;
     }
};