void REV(string &s, int st, int end){

    while (st <= end){
        swap(s[st], s[end]);
        st+=1;
        end-=1;
    }
}


class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();

        int st , end ;

        for (int i=0 ; i<n; i++){
            
            if (i == 0) st = 0;

            if (i == n-1 || s[i] == ' '){   
                end = (i == n-1) ? i : i-1;
                REV(s, st, end);
                st = i+1;
            }
        }

        return s;


    }
};