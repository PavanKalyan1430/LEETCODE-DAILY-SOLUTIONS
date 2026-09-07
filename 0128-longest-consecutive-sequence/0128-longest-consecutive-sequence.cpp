class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set <int> sety(nums.begin(), nums.end());
        int cnt = 0, max_cnt = 0;

        for (auto i : sety){
            int num = i;
            int prev = num-1;
            
            if (!sety.count(prev)){
                
                cnt = 0;
                while (sety.count(num)){
                    cnt +=1;
                    num +=1;
                }

                max_cnt = max(cnt , max_cnt);
            } 

        }

        return max_cnt;

    }
};