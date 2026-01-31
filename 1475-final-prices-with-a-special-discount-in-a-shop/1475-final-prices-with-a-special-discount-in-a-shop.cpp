class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        
        stack <int> s;
        vector<int> result;
        int n  =nums.size();

        for (int i=n-1; i>=0; i--){

            while (!s.empty() && nums[s.top()] > nums[i]) s.pop();

            if (s.empty()) result.push_back(0);
            else result.push_back(s.top());

            s.push(i);

        }

        reverse(result.begin(), result.end());

        for (int i=0; i<n; i++){
            if (result[i] == 0){
                result[i] = nums[i];
            } 

            else result[i] = nums[i]-nums[result[i]];
        }

        return result;

    }
};