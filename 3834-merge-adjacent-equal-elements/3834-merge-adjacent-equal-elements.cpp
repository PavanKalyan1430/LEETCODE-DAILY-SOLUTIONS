class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        stack <long long> s;

        for (long long i : nums){

            long long num = i;
            while (!s.empty() && s.top() == num){
                num = (1LL * s.top() * 2);
                s.pop();
            }
            s.push(num);
        }


        vector<long long> res;

        while (!s.empty()){
            //cout<<s.top()<<" ";
            res.push_back(s.top());
            s.pop();
        }

        reverse(res.begin(), res.end());
        return res ;
    }
};