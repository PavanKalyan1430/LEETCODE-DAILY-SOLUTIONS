class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int i =0;
        int n = nums.size();


        while (i < n){
            int correct_index = nums[i]-1;

            if (nums[i] != nums[correct_index]){
                swap(nums[i], nums[correct_index]);
            }

            else i+=1;
        }

    for (auto i : nums) cout<<i<<" ";

        for (int i=0; i<n; i++){
            if (nums[i] != i+1) return nums[i]; 
        }

        return n;
    }
};