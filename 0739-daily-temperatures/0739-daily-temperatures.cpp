class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        
        vector<int> res;
        
        for (int i=0; i<nums.size(); i++){
            int element = nums[i];
            int  j =i+1;
            
            while( j < nums.size() and nums[j]<= element ) j++;

            if ( j >= nums.size()) res.push_back(0); 
            else res.push_back( j-i );
        }

        return res;

    }
};