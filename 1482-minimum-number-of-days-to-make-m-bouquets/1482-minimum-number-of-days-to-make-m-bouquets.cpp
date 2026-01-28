bool can_bloom(vector<int>&nums, int m , int k , int day){
    
    int boque = 0;
    int cnt = 0;

    for (int i : nums){
        if ( i <= day ){
            cnt +=1;

            if (cnt == k){
                boque +=1;
                cnt=0;
            }
        }

        else cnt = 0;
    }

    //cout<<day << "   "<<boque<<endl;
    

    return boque >= m;
}


class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        
        int n = nums.size();
        if (1LL *  m * k > n) return -1;

        int left =  1;
        int right = *max_element(nums.begin(), nums.end());

        int ans = -1;

        while(left <= right){
            int mid = left  + (right-left)/2;

            if (can_bloom(nums, m, k, mid) ){
                ans = mid;
                right = mid-1;           
            }

            else left = mid +1;
        }

        return ans;
    }
};