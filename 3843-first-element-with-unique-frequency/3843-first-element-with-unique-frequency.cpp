class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        
        unordered_map<int , int> m, freq;

        for (int i : nums) m[i]+=1;

        for (auto i : m){
            int f = i.second;
            freq[f]+=1;
        }

        for (int i=0; i<nums.size(); i++){
            if (freq[m[nums[i]]] == 1) return nums[i];
        }

        return -1;

    }
};