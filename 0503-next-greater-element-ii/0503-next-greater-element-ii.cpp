class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        

        vector<int> temp = nums;
        stack <int> s;
        vector<int> res;

        nums.insert(nums.end(), temp.begin(), temp.end());
        int n = nums.size();


        vector<int> result(2 * n);

        for (int i=n-1; i>=0; i--){

            while (!s.empty() && nums[i] >= s.top()) s.pop();

            if (s.empty()) result[i] = -1;
            else result[i] = s.top();

            s.push(nums[i]);
        }

        for (int i= 0; i<n/2; i++){
            res.push_back(result[i]);
        }

        return res;
      

     

    }
};