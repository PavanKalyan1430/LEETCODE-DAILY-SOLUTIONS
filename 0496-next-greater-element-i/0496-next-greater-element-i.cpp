class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        //unordered_map (int , int) m;

        vector<int> result;

        // for (int i=0; i<nums1.size(); i++){
        //     m[nums[i]]+=1;
        // }
        int k;

        for (int i=0; i<nums1.size(); i++){

            for (int j =0; j<nums2.size(); j++){

                if (nums1[i] == nums2[j]){

                    int ele = nums2[j];

                    for ( k =j+1; k<nums2.size(); k++){
                        if ( nums2[k] > ele){
                            result.push_back(nums2[k]);
                            break;
                        }
                    }

                    if ( k == nums2.size()) result.push_back(-1);

                }
                

                
            }
        }

        return result;

    }
};