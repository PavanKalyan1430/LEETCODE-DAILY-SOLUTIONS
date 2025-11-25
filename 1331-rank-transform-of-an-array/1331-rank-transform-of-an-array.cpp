class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        
        vector <int> dup = nums;
        vector<int> result;
        int n = nums.size();

        if (nums.empty()) return {};

        sort(nums.begin(), nums.end());

        unordered_map <int, int> m;

        int rank = 1;

        for (int i=1; i<nums.size(); i++){

            
             m[nums[i-1]] = rank;

            if (nums[i] != nums[i-1]){
                rank+=1;
            }
        }


        if (n >=2 and nums[n-1] != nums[n-2]) m[nums[n-1]] = rank;
        else m[nums[0]] = 1;

        for (int i=0; i<dup.size(); i++){
            result.push_back(m[dup[i]]);
        }

        return result;


    }
};