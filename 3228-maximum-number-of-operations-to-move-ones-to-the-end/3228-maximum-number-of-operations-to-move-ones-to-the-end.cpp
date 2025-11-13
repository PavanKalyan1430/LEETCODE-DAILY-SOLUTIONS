class Solution {
public:
    int maxOperations(string s) {

        int n = s.size();
        int ones = 0;
        int answer = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                ones++;
            else if (i + 1 == n || s[i + 1] == '1')
                answer += ones;
        return answer;
         
    }

    
};