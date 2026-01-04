class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;

        int temp_sum, cnt, num ;

        for (int i=0; i<n; i++){
            num  = nums[i];
            cnt = 0;
            temp_sum = num+1;

            for (int j=2; j<=num/2; j++){

                if (num % j == 0){
                    temp_sum += j;
                    cnt +=1;
                }  
                
                if (cnt > 2){
                    break;
                }

            }
    
            if (cnt == 2) sum += temp_sum;

            
        }

        return sum;
    }
};