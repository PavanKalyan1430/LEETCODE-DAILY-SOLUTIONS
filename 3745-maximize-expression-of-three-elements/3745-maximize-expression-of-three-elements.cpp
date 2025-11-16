class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int seclargest = INT_MIN;


        for (int i=0; i<nums.size(); i++){

            smallest = min(smallest, nums[i]);

            if (nums[i] >= largest){
                seclargest = largest;
                largest = nums[i];
            }

            else if (nums[i] < largest and nums[i] > seclargest ){
                seclargest = nums[i];
            }

        }

        cout<<smallest << " " <<seclargest <<"  "<<largest;


        return largest + seclargest - smallest;



    }
};