void XOR_SUM(vector<int>&nums, int xory, int &sum , int i){

    if ( i < 0){
        sum += xory;
        return;
    }

    // PICK
    XOR_SUM(nums, xory ^ nums[i], sum, i-1);

    // NOT PICK
    XOR_SUM(nums, xory, sum, i-1);

    return;




}



class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int xory = 0;
        int sum = 0;

        int n = nums.size();

        XOR_SUM(nums, xory, sum , n-1);

        return sum;
    }
};