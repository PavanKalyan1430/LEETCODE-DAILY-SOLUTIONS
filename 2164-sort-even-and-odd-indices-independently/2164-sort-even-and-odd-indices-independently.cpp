class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector <int> even , odd, result;

        for (int i=0; i<nums.size(); i++){
            if (i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }

        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());

        int i = 0;

        for (int k=0; k<even.size(); k++){
            result.push_back(even[i]);
            result.push_back(odd[i]);
            i+=1;

        }

        return result;


    }
};