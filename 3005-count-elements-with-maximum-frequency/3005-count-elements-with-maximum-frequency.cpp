class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map <int , int> m;
        int maxi = 0;

        for (int i=0; i<nums.size(); i++){
            m[nums[i]]++;

            maxi = max(maxi, m[nums[i]]);
        }

        int county = 0;

        for (int i=0; i<nums.size() ; i++){
            if (m.count(nums[i]) and m[nums[i]] == maxi ){
                county+= m[nums[i]];
                m.erase(nums[i]);
            }
        }

        return county ;

    }
};