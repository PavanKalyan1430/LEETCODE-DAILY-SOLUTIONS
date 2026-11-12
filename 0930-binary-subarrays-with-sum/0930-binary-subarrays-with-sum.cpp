int AtMost(vector<int> &nums , int goal){

    int left  = 0;
    int result = 0;
    int sum  = 0;

    if (goal < 0 ) return 0 ;


    for (int right  = 0; right < nums.size(); right++){

        sum += nums[right];

        while (sum > goal){
            sum -= nums[left];
            left+=1;
        }

        result  +=  ( right-left+1 ) ;

    }

    return result;

}



class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
       
        return AtMost(nums, goal) - AtMost(nums , goal-1);




    }
};