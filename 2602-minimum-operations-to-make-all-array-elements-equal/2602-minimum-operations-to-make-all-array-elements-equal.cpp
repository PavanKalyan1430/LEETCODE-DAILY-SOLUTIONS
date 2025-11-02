class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());
        
        vector<long long > prefix(nums.size());
        int n = nums.size()-1;
        vector<long long> result;
        long long  sumy =0;

        for (int i=0; i<nums.size(); i++) {
            sumy += nums[i];
            prefix[i] = sumy;
        }



        for (int i=0; i<queries.size(); i++){

            int left = 0;
            int right = n;
            int ans = n;

            while(left <= right){
                int mid = left + (right-left)/2;

                if (nums[mid] <= queries[i]){
                    ans = mid;
                    left = mid+1;
                }

                else  right= mid-1;
            }

            cout<<ans<<endl;

             long long left_sum = 1LL * (ans+1) * queries[i];
             long long right_sum = 1LL * (n-ans) * queries[i];

             cout<<"left_sum   "<<left_sum<<endl;
             cout<<"right_sum   "<<right_sum<<endl;


            long long left_sum_diffrence = abs(prefix[ans] - left_sum);
            long long right_sum_diffrence = abs(prefix[n]- prefix[ans] - right_sum);

            result.push_back( (left_sum_diffrence +  right_sum_diffrence) ) ;



        }

        return result;

    }
};