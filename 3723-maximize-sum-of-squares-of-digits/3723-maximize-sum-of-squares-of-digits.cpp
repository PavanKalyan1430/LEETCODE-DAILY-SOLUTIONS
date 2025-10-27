class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        //if(num<=100 || num==100000){
            if(9*num<sum) return "";
        //}
            
        string ans;
        for(int i=num-1;i>=0;i--){
            int d=min(9, sum);
            ans.push_back('0'+d);
            sum -= d;
        }
        return ans;
    }
};