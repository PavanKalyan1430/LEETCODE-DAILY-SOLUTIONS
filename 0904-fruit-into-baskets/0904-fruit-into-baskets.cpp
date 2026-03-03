class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map <int,int> m;

        int left = 0, maxi = 0;

        for (int right =0; right<nums.size(); right++){
            
            m[nums[right]]+=1;

             if (m.size() > 2){
                m[nums[left]]-=1;

                if (m[nums[left]] == 0) m.erase(nums[left]);
                left+=1;
             }

             maxi = max(maxi , right-left+1);
        }

        return maxi;
    }
};