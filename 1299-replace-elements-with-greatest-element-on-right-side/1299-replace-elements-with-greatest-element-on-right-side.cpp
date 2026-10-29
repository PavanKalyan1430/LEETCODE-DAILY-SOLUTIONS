class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        
        int n = nums.size();

        int index = n-1;

        vector<int> result (n);
        result[index--] = -1;

        int maxi = nums.back();


        for (int i=n-2; i>=0; i--){
            result[index--] = maxi;
            maxi = max(maxi , nums[i]);
        }

        return result;

        }
    
};