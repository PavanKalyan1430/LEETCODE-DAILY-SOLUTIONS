class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()){

            if (nums1[i] == nums2[j]){
                result.push_back(nums1[i]);

                int ele = nums1[i];

                i+=1;
                j+=1;

                // while ( i < nums1.size() && nums1[i] == ele) i+=1;
                // while ( j < nums2.size() && nums2[j] == ele) j+=1;

                
            }

            else if (nums1[i] < nums2[j]) i +=1;

            else j+=1;
        }

        // for (int i : nums1) cout<<i<<" ";
        
        // cout<<endl;

        // for (int i : nums2)  cout<<i<<" ";

        return result;
    }
};