class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        
        int left = 0;
        int right = nums.size()-1;
        int mid;

        while (left <= right){
            mid =  (left + right)/2;

            int diff = (nums[mid]-1 - mid);

            if (diff < k) left = mid+1;
            else  right = mid-1;
           


        }

        return left + k;

    


    }
};