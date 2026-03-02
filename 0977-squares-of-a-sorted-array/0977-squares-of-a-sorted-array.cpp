class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        int l = -1;
        int r=  -1;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] >= 0){
                l = i-1;
                r = i;
                break;
            }
        }

        // if all are negative elements then l will be the last index;
        //and r will be n+1
        if (l == -1 && r == -1){
            l= n-1;
            r = n;
        }

        while ( l>= 0 || r < n){

            int a = INT_MAX, b = INT_MAX;

            if (l >=0 ) a = nums[l] * nums[l];
            if (r < n ) b = nums[r] * nums[r];

            if ( a < b){
                result.push_back(a);
                l-=1;
            }

            else {
                result.push_back(b);
                r+=1;
            }
        }
        return result;
    }
};