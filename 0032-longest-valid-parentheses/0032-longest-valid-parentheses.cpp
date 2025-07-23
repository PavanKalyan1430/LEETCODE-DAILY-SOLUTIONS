class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> stacky;
        int maxi =0;
        vector <int> mark(s.size(),0);
        int count =0;
        for (int i=0; i<s.size(); i++){
            if (s[i] == '(') stacky.push(i);
            else if (s[i] == ')' and !stacky.empty()){
                int pos = stacky.top();
                stacky.pop();
                mark[pos] =1;
                mark[i] = 1;
            }  
        }
        //for (int i: mark) cout<<i<<" ";
        for (int i=0; i < mark.size();i++){
            cout<<i<<" ";
            if (mark[i]==1){
                count+=1;
                maxi = max(maxi, count);
            }
            else count=0;
        }
    return maxi;
    }

};