class Solution {
public:
    int minimumDeletions(string s) {
        
        int n = s.size();

        vector<int> prefix_b(n, 0);
        vector<int> suffix_a(n, 0);

        int a_cnt =0, b_cnt = 0;

        for (int i=1; i<s.size(); i++){
            if (s[i-1]== 'b'){
                b_cnt +=1;
            }
            prefix_b[i] = b_cnt;
        }

        for (int i= s.size()-2; i>=0; i--){
            if (s[i+1] == 'a'){
                a_cnt +=1;
            }
                suffix_a[i] = a_cnt;
        }

        int mincnt = INT_MAX;

        for (int i=0; i<s.size(); i++){
                mincnt = min(mincnt , prefix_b[i] + suffix_a[i]);
        }

        // for (auto i : prefix_b) cout<<i<<" ";
        // cout<<endl;
        // for (auto i : suffix_a) cout<<i<<" ";

        return (mincnt == INT_MAX) ? 0 : mincnt;
    }
};