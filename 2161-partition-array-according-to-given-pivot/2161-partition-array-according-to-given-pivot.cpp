class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n = nums.size();
        vector<int> result(n);

        int less =0, equal= 0; 

        for (int i=0; i<nums.size(); i++){
            if (nums[i] < pivot) less+=1;
            else if (nums[i] == pivot) equal+=1;
        }

        int low = 0; 
        int mid = less; 
        int high = less+ equal;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] < pivot) result[low++] = nums[i];
            else if (nums[i] == pivot) result[mid++] = nums[i];
            else result[high++] = nums[i];
        }
        return result;

    }
};