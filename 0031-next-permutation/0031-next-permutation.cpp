class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int pivot, right;
        int index ;
        int mini= INT_MAX;


        for (right = nums.size()-2; right>=0; right--){
            if (nums[right] < nums[right+1]){
                pivot = right;
                break;
            }
        }


        if (right < 0){
            reverse(nums.begin(), nums.end());
            return;
        }

        //cout<<nums[pivot]<<endl;

        for (int i=pivot+1 ; i<nums.size(); i++){

            if (nums[i] > nums[pivot] && nums[i] <= mini){
                index = i;
                mini = nums[i];
            }
        }

        //cout<<mini<<endl;

        swap(nums[index] , nums[pivot]);
        //for (auto i : nums) cout<<i<<" ";

        reverse(nums.begin()+pivot+1, nums.end());
    }
};