class Solution {
public:
    int minOperations(string s) {
        
       
    
        int cnt_1 = 0, cnt_0 = 0;
        for (int i=0; i<s.size(); i++){

            // 1 0 1
            if (i%2 == 0 && s[i] == '0') cnt_1+=1;
            else if (i %2 !=0 && s[i] == '1' ) cnt_1+=1;

            // 0 1 0
            if (i % 2 == 0 && s[i] == '1') cnt_0+=1;
            else if (i % 2 != 0 && s[i] == '0') cnt_0+=1;

        }

        return min(cnt_0, cnt_1);
    }
};