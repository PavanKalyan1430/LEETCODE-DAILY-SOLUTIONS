class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        

        int i =0;
        int j = 0;
        
        vector <int> result;

        while (i <nums1.size() and j < nums2.size()){

            if (nums1[i] <= nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }

            else {
                result.push_back(nums2[j]);
                j++;
            }

        }

        while (i < nums1.size()){
            result.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()){
            result.push_back(nums2[j]);
            j++;
        }

        int n = result.size();


        if (n % 2 == 0) {
            return ( result[n / 2] + result[n/ 2 - 1] ) / 2.0;
        }

        return result[n/2];

    }
};