class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> res(nums.size());
        int left=0,right =0;
        int mid =0;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] < pivot){
                left+=1;
            }

            else if (nums[i]==pivot){
                mid+=1;
            }
        }
            right = left + mid;
            mid = left ;
            left =0;
        for (int i=0 ; i<nums.size(); i++){
            if (nums[i] > pivot){
                res[right] = nums[i];
                right+=1;
            }
            else if (nums[i] < pivot){
                res[left] = nums[i];
                left+=1;
            }
            else {
                res[mid] = nums[i];
                mid+=1;
            }
        }

    

    return res;
    }
};