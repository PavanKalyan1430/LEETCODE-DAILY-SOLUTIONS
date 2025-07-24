class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> m;
        m[0]=1;
        int count =0;
        int prefsum=0;
        for(int i=0; i<nums.size(); i++){
            prefsum+= nums[i];
            int comp = prefsum-k;
            if (m.count(comp)){
                count+= m[comp];
            }
            m[prefsum]+=1;

        } 
        return count;
    }
};