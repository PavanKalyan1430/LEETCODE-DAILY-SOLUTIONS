class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        int i = 0;
        int j = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());   

        vector<int> result;

        int n = nums1.size(), m= nums2.size();

        while (i < n && j < m){
            
            if (nums1[i] < nums2[j]){
                i+=1;
                continue;
            }

            else if (nums1[i] > nums2[j]){
                j+=1;
                continue;
            }

            else {
                int ele = nums1[i];

                int cnt1 = 0, cnt2  =0;

                while (i < n && nums1[i] == ele){
                    cnt1+=1;
                    i+=1;
                }
                while (j < m && nums2[j] == ele){
                    cnt2+=1;
                    j+=1;
                }

                int min_cnt = min(cnt1, cnt2);
                while (min_cnt--) result.push_back(ele);

            }

        }

        return result;   
    }
};