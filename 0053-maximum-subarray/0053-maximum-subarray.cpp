class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum  = nums[0];
        int maxi = nums[0];

        int tempStart = 0, start = 0;
        int end = 0, ans = 0 ;

        // [ -2, 1, -3, 4, -1, 2, 1 , -5, 4]    => [4,-1,2,1]

        for (int i=1; i<nums.size(); i++){

            if (sum < 0 ){
                sum = 0;
                tempStart = i;
            }

            sum += nums[i];
            

            if (sum > maxi){
                maxi = sum;
                start = tempStart;
                end = i;
            }

        }

        

        for (int i= start; i<=end; i++){
            //cout<<nums[i]<<" ";
            ans += nums[i];
        }
    
        return ans;





        // for (int i=1; i<nums.size(); i++){

        //     if (sum < 0) sum  = 0;
            
        //     sum += nums[i];
        //     maxi = max(maxi , sum);

        // }

        return 0;;

    }
};