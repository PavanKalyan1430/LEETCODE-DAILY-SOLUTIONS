class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int i = 0;
        int j = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());   

        vector<int> result;

        int n = nums1.size(), m= nums2.size();

        while (i < n && j < m){
            if (nums1[i] == nums2[j]){
                result.push_back(nums1[i]);

                int ele = nums1[i];
                while (i < n && nums1[i] == ele) i+=1;
                while (j < m && nums2[j] == ele) j+=1;

               
            }

            else if (nums2[j] > nums1[i]) i+=1;

            else j+=1;
        }

        return result;
    }
};