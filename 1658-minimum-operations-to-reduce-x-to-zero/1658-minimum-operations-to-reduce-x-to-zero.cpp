class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n = nums.size();
        long long total = accumulate(nums.begin(), nums.end(), 0);
       

        int target = total - x;
        int left = 0, maxlen = -1, sum = 0;

       

       if (total == x) return n;
       if (target < 0 ) return -1;


        for (int right=0; right<n; right++){

            sum+= nums[right];

            while(sum >= target){

                if ( sum == target) maxlen = max(maxlen , right-left+1);
                cout<<left<<" ";
                sum -= nums[left];
                left +=1;
            }
        }

        return (maxlen != -1) ? n - maxlen : -1;
    }
};