class Solution {
public:
    int jump(vector<int>& nums) {
        

        int stop= 0;
        int max_reach = 0;
        int jumps = 0;

        for (int i=0; i<nums.size()-1; i++){
            
            max_reach = max(max_reach , nums[i]+i);

            if (stop == i){
                jumps +=1;
                stop = max_reach;
            }

        }

        return jumps;



    }
};