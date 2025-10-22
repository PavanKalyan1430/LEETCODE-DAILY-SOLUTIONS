class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> result(nums.size());
        int n = nums.size();

        for (int i : result) cout<<i<<" ";

        k = k  % nums.size(); 


        for (int i=0; i<nums.size(); i++){
            result[ (i + k) % n] =  nums[i];
        }

        nums = result;



    

    }
};