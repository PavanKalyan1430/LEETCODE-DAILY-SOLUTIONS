class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        sort(capacity.rbegin(), capacity.rend());

        int total = accumulate(apple.begin(), apple.end(), 0);

        int cnt = 0,  i = 0;

        while(total > 0 && i< capacity.size()){
            total -= capacity[i];
            i+=1;
            cnt += 1;
        }

        return cnt;

    }
};