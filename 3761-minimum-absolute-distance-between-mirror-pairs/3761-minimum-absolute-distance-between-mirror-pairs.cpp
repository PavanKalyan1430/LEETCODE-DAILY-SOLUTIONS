int rev(int num){
    int temp = 0;
    while(num > 0){
        temp = (temp * 10) + num % 10;
        num = num / 10;
    }
    return temp;
}

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {

        int min_len = INT_MAX;

        unordered_map<int, int> m;


        for (int i = 0; i < nums.size(); i++) {
            
            int reverse_num = rev(nums[i]);

            if (m.count(nums[i])){
                min_len = min(min_len, abs(i - m[nums[i]]) );
            }

            m[reverse_num] = i;

        }

        return (min_len == INT_MAX) ? -1 : min_len;
    }
};
