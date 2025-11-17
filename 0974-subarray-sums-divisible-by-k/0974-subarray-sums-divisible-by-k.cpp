class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
     int sum = 0;
     unordered_map <int, int> m;
     m[0] = 1;

     int result = 0;

     for (int i=0; i<nums.size(); i++){

        sum += nums[i];

       int rem =  sum % k;

        int new_rem = (rem + k) % k;

        if (m.count(new_rem)){
            result += m[new_rem];
        }

        m[new_rem]+=1;


     }

     return result;

    }
};