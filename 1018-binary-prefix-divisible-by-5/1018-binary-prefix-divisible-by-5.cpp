class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        long  num = 0;
        vector<bool> v;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 1){
                num =  (num*2+1);
            }
            else num =  2*num;

            num = num % 5;

            //cout<<num<<" ";

            v.push_back( (num == 0) ? 1 : 0 );
        }

        return v;

        

    }
};