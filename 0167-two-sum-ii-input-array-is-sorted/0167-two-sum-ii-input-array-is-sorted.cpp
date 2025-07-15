class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
           /// mid= (left+right)/2;
            if (numbers[left]+numbers[right]==target){
                return {left+1,right+1};
            }

            else if (numbers[left]+numbers[right] > target){
                right-=1;
            }

            else left+=1;

        }
        return {};
    }
};