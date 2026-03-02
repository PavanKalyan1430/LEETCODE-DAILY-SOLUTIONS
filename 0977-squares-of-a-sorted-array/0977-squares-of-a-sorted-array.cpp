class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n= nums.size();
        vector<int> result(n);
        int pos = n-1;

        int left = 0; int right = n-1;

        while (left <= right){
            if ( abs(nums[left]) <= abs(nums[right]) ){
                result[pos] = nums[right] * nums[right];
                right-=1;
            }

            else{
                result[pos] = nums[left] * nums[left];
                left+=1;
            }

            pos-=1;
        }
        return result;
    }
};


// as the elements will be squared 

// no we know that the array os sorted in increassing order
// so now , the largest squared number will be either the first element or the last element
// it means we can decide at this posiiton which number will firs in the greatest posisiton in the result array
// so now place the largest sqaure among those 2 numbers and move the largest number index;