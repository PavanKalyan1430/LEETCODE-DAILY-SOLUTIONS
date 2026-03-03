class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m -1;
        int j = n -1;
        int k = m + n- 1;

        while (i >=0 && j>=0){
            int a = nums1[i];
            int b = nums2[j];

            if (b > a){
                nums1[k--] = b;
                j-=1; 
            }

            else{
                nums1[k--] = a; 
                i-=1; 
            }
        }

        while (j>= 0){
            nums1[k--] = nums2[j];
            j-=1;
        }
    }
};