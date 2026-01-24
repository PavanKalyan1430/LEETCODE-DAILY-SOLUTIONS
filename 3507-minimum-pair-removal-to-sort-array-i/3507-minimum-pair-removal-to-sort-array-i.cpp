class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        
        int n = nums.size();
        int cnt = 0;

        while (nums.size() > 1){

            int min_sum = INT_MAX;
            int index = -1 ;
            bool ascending = true;

            for (int i=0; i<nums.size()-1; i++){

                int sum = nums[i] + nums[i+1];

                if (sum < min_sum){
                    min_sum = sum;
                    index = i;
                }

                if (nums[i] > nums[i+1]){
                    ascending  = false;
                }
                    

                
            }

            if (ascending) break;

            nums[index] = min_sum;
            nums.erase(nums.begin()+index+1);

            // for (int i : nums) cout<<i<<" ";
            // cout<<endl;
            cnt +=1;



        }

        return cnt;
        
    }
};