class Solution {
public:
    bool isPalindrome(string nums) {
        
        int left = 0;
        int right = nums.size()-1;

        while (left < right){

            while( left < right && !(isalpha(nums[left])) ) left+=1;
            while( right > left && !(isalpha(nums[right])) ) right-=1;

            if (tolower(nums[left]) != tolower(nums[right]) ) return false;

            left+=1 ; right-=1;

        }

        return true;
    }

};