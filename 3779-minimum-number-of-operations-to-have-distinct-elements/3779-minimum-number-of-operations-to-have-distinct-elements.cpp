class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map <int, int> m;
        int n = nums.size();
        int cnt = 0;
        int left = 0;
        
        for (int i=0; i<nums.size(); i++){
            m[nums[i]]+=1;
        }

        for (int right= 0; right<nums.size(); right++){

            while(m[nums[right]] > 1){
                    cnt +=1;

                for (int j = left; j<left+3 && j<n ; j++){
                    m[nums[j]]-=1;  
                }
                left = left +3;
                
            }
            
        }

        return cnt;

        
    }
};