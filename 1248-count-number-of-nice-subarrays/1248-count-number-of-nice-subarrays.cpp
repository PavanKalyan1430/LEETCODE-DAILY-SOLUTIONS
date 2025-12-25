int fun(vector<int>& nums, int k){

    int left = 0;
    int cnt = 0;
    int odd = 0;
    int n = nums.size();

    for (int right =0; right<n; right++){

        if (nums[right] % 2 != 0) odd+=1;
        
        while(odd > k){
            cnt += (n-right);
            cout<<left<<" ";

            if (nums[left] % 2 !=0) odd-=1;
            left +=1;
        }

    }

    return cnt;
}


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int cnt1 = fun(nums, k);
        int cnt2 = fun(nums, k-1);

        return abs(cnt1-cnt2);
    }
};