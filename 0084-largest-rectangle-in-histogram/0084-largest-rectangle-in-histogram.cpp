class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        
        stack <int> s;
        vector<int> result;
        vector<int> result2;

        int maxi = 0;

        int n = nums.size();

        result.push_back(0);
        s.push(0);

        for (int i=1; i<n; i++){

            while ( !s.empty() && nums[s.top()] >= nums[i] ) s.pop();

            if (s.empty()) result.push_back(i);
            else result.push_back(  i - s.top() - 1);

            s.push(i);
        }




        //while(!s.empty()) s.pop(); // clearing whole stack;




        stack <int> p;
        result2.push_back(0);
        p.push(n-1);

        for (int i = n-2; i>=0; i--){

            while(!p.empty() && nums[p.top()] >= nums[i] ) p.pop();

            if (p.empty()) result2.push_back(n-i-1);
            else result2.push_back(p.top() - i-1 );

            p.push(i);
        }

        reverse(result2.begin(), result2.end());


        // for (auto i : result) cout<<i<<" ";

        // cout<<endl;

        // for (auto i: result2) cout<<i<<" ";

        for (int i=0; i<n; i++){
            maxi = max(maxi , (result[i] + result2[i] + 1) * nums[i]);
        }


        return maxi;

    




    }
};