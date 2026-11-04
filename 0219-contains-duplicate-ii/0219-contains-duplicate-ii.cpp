class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        

        int left = 0;
        unordered_map <int ,int> m;

        for (int right = 0 ; right < nums.size(); right++){

            m[nums[right]]+=1;

            if (right - left  <= k ){
                
                // cout<<m.size()  <<"  "<< left << "  "<<right<<endl;

                if (m.size() != right-left+1) return true;

                if (right-left == k){
                    m[nums[left]]-=1;

                    if (m[nums[left]] == 0) m.erase(nums[left]);
                    left+=1;
                }
            }
 


        }

        return false;



    }
};