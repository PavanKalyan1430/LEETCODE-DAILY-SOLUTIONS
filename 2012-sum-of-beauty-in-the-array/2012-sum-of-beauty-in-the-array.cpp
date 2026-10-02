class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        int n  = nums.size();

        vector <int>  maxi(n);
        vector<int>   mini(n);

        int min_ele = INT_MAX;
        int max_ele = 0, score  = 0;


        for (int i=0; i<n; i++){

            max_ele = max(max_ele, nums[i]);
            min_ele  = min(min_ele, nums[n-i-1]);

            maxi[i] = max_ele;
            mini[n-i-1] = min_ele;
        }

        for (int i=1; i<n-1; i++){

            if (  nums[i] > maxi[i-1] && nums[i] < mini[i+1]) score+=2;
            
            else if (nums[i] > nums[i-1] && nums[i] < nums[i+1]) score+=1;
        }

        return score;

    }
};