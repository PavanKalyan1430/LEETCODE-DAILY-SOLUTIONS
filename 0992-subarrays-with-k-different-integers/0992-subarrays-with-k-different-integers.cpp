int count_subarrays(vector<int>& nums, int k){

    int left = 0;
    int result_count= 0;

    unordered_map <int, int> m;

    for (int right =0; right<nums.size(); right++){
        m[nums[right]]++;

        while (m.size() > k){

            m[nums[left]]--;

            if (m[nums[left]] == 0){
                m.erase(nums[left]);
            }
            
            left++;
        }

        result_count +=  (right-left+1);
    }

    return result_count;
}

   


class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int atmost_K = count_subarrays(nums, k);
        int atmost_Kminus1 = count_subarrays(nums, k-1);

        return  atmost_K -  atmost_Kminus1;

    }
};