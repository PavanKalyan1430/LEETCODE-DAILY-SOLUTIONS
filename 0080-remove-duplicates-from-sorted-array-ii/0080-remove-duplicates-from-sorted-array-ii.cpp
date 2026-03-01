class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int h=0,count=0;
        int x=nums.size()-1;
        cout<<x;
        int v=nums[x];
        for (int i=0; i<nums.size()-1; i++){
            if (nums[i]==nums[i+1]){
                count+=1;
                if (count<2){
                    nums[h]=nums[i];
                     h++;
                }
            }
            else {
                count=0;
                nums[h]=nums[i];
                h++;
            }
            

        }
         nums[h]=v;
         h++;
        return h;
    
    }
};