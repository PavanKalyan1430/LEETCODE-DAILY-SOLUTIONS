class NumArray {
public:

    vector <int> arr;

    NumArray(vector<int>& nums) {
        arr = nums;
    }
    
    int sumRange(int left, int right) {
        
        
        vector <int> prefix (arr.size()+1);
        prefix[0] = 0;

        for (int i=0; i<arr.size(); i++){
            prefix[i+1] = prefix[i] + arr[i];
        }

        return prefix[right+1] - prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */