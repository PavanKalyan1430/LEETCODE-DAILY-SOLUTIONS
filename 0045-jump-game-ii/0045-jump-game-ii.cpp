class Solution {
public:
    int jump(vector<int>& nums) {
        int stop = 0;
        int max_distance = 0;
        int jump_count = 0;

        if (nums[0])


        for(int i=0; i<nums.size()-1; i++){

            max_distance = max(max_distance,nums[i] + i);

            if (i== stop){
                jump_count +=1;
                stop = max_distance;}
            

        }
        return jump_count;

    }
};