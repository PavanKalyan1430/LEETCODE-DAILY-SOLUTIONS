class Solution {
public:
    int minimumSum(vector<int>& nums) {
        

        // IN QUESTIONS LIKE THESE WE CAN SOLVE BU BUILDING PREFIX AND SUFFIX ARRAYS (PRE COMPUTATION)

        //SO WE NEED TO BUILD BOTH LEFT_MIN AND RIGHT_MIN  ARRAYS

        // AND THEN AT EVRY INDEX I WSE NEED TO SEE THE MIN ELEMENT UPTO THE I-1 INDEX AND THE MIN ELEMENT TILL  I+1 INDEX (FROM RIGHT_SIDE);



        int n  = nums.size();
        vector<int> left(n);
        vector<int> right(n);

        int sum  = INT_MAX;
        int lmin = INT_MAX , rmin = INT_MAX;

        for (int i=0; i<n; i++){
            lmin = min(lmin , nums[i]);
            left[i] = lmin;

            rmin = min(rmin , nums[n-i-1]);
            right[n-i-1] = rmin; 
        }

        for (int i= 1 ; i<n-1; i++){
            if (nums[i] > left[i-1] && nums[i] > right[i+1]){
                sum  = min(sum , nums[i] + left[i-1] + right[i+1]);
            }
        }

        return (sum == INT_MAX) ? -1  : sum;


        

    }
};