class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&  nums) {
        
        stack <int> s;
        vector <int> result(nums.size());

        for (int i=0; i<nums.size(); i++){

            while (s.size() > 0 and nums[s.top()]  < nums[i]){

                    result[s.top()] =  i- s.top() ;
                    s.pop();

            }
            s.push(i);

        }

        for (int i: result) cout<<i<<" ";
        return result;


    }
};