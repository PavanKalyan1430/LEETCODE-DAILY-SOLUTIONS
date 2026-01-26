class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {

       vector<int> temp;

       for (auto i : nums){
            if (i >= 0) temp.push_back(i);
       }

       int t = temp.size();
       if (t == 0) return nums;
       
       int idx = 0;
       vector<int> rotated(t);

       
       k = k % t;

       for (int i= 0 ;i<t ; i++){
            rotated[i] = temp[ (i+ k) % t ];
       }


       for(int i=0; i<nums.size(); i++){
            if (nums[i] >= 0){
                // cout<<idx<<" ";
                nums[i] = rotated[idx];
                idx+=1;
            }
       }

       return nums;
       




    }
};