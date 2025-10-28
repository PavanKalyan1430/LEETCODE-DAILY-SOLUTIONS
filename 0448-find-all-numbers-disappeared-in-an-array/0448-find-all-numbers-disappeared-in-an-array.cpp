class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int correct_index;
        int i=0;
        int n = nums.size();
        vector <int> result;
        
        while( i < n ){
            
            correct_index = nums[i]-1;
            
            if (nums[i] <= n and  nums[i]  != nums[correct_index]){
                
                swap(nums[i] , nums[correct_index]);
            }
            
            else i++;
            
        }

        for (auto i : nums) cout<<i<<" ";
        
        for (int i=0; i<n; i++){
            if (nums[i] != i+1) result.push_back(i+1);
        }
        
        return result;

        
    }
};