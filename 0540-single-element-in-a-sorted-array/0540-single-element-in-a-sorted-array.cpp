class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-2;
        int size=nums.size()-1;

        if (nums.size()==1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[size] != nums[size-1]) return nums[size];

        while( left <= right){
            cout<< left <<" "<< right<<endl;
            int mid = ( left + right ) / 2;
            cout<<"mid "<<mid<<endl;
            if (nums[mid] != nums[mid-1] and nums[mid]!= nums[mid+1]) return nums[mid];

            else if (nums[mid] == nums[mid-1]){
                if ( (mid-1) % 2 != 0) right  = mid-1;
                else left = mid+1; 
            }
            else {
                if (mid % 2 != 0) right = mid-1;
                else left = mid+1;
            }
        }

        return -1;

    }
};