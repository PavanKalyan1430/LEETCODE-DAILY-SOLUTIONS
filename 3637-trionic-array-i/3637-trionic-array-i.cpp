class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        
        bool p = false;
        bool q = false;
        bool n = false;


        int sz = nums.size();

        int i=0;

        while( i+1  < sz ){
            if (nums[i] < nums[i+1]) i+=1;
            else break;
        }

        if (i == sz || i == 0) return false;


        int ind  = i;
        while(i+1 < sz){
            if (nums[i] > nums[i+1]) i+=1;
            else break;
        }

        if (i == ind || i == sz) return false;

         ind = i;

          while(i+1 < sz){
            if (nums[i] < nums[i+1]) i+=1;
            else return false;
        }


        return true;




    }
};