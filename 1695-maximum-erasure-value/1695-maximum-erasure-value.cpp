class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        if (nums.size() == 1 ) return nums[0];

        unordered_map <int,int> m;

        int left = 0;
        int sumy = 0;
        int result = 0;

        for (int right = 0; right<nums.size(); right++){

            sumy += nums[right];
            m[nums[right]] ++;

            while( m[nums[right]] > 1){
                m[nums[left]]--;
                sumy -= nums[left];
                left+=1;
            }
            result = max(result, sumy);
            cout<<result<<" ";



        }

        return result;

    }
};