class Solution {
public:
    int findLucky(vector<int>& nums) {

     unordered_map <int , int> m;
     int maxi = 0;

     for (int i: nums) m[i]++;


    

     for (int i=0; i<nums.size(); i++){

        if (nums[i] == m[nums[i]]) maxi = max(maxi, nums[i]);

     }

     return (maxi == 0) ?  -1 : maxi;

    }
};