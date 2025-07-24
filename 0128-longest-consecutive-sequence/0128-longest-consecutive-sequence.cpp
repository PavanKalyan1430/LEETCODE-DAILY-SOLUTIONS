class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set <int> sety(nums.begin(),nums.end());
        int maxi =1,c;
        if (nums.size()==0 ) return 0;
       for (auto i : sety){
            if (!sety.count(i-1)){
                c =1;
                int ele = i+1;
                while(sety.count(ele)){
                    c+=1;
                    ele = ele+1;
                    maxi = max(maxi,c);
                }
            }


       } 

    return maxi;
    }
};