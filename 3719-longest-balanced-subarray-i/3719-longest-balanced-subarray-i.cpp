class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        
        int result = 0;

        for (int i=0; i<nums.size(); i++){

            unordered_map <int , int> odd_map, even_map;

            for (int j =i; j<nums.size(); j++){

                if (nums[j] % 2 == 0) even_map[nums[j]]++;
                else odd_map[nums[j]]++;

                if ( odd_map.size()  == even_map.size() ) result = max(result, j-i+1);

            }

        }

        return result;

    }
};