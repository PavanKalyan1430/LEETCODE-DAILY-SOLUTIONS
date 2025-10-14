class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();

        int endpoint = n - (2*k);

        for (int i=0; i<= endpoint; i++){

            bool flag1 = true;
            bool flag2 = true;

            for (int j =i; j< i+k-1; j++){

                if (nums[j] >= nums[j+1]){
                    cout<<"yes"<<" ";
                    flag1 = false;
                    break;
                }

            }

            if (flag1){

              // cout<<j<<endl;

                 for (int p = i+k; p <  i+ (2 * k )-1; p++){

                    if (nums[p] >= nums[p+1]){
                        flag2 = false;
                        break;
                    }

                }

                if (flag1 and flag2) return true;

                
            }
           

            

            



        }

        return false;

    }
};