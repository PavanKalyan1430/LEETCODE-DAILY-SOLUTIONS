bool fun(string&s , string &p, int i , int j){

    if (j < 0) return i<0;

    if (i < 0){
        
        //if (j % 2 == 0) return false;     // definitely it should have even length 
                                          // so if the index if even it means it is odd lengtj

        for (int k =j; k>=0; k-=2){
            if (p[k] != '*') return false;
        }

        return true;
    }


    if (s[i] == p[j] || p[j] == '.') return fun(s,p, i-1, j-1);

    else if (p[j] == '*'){

        bool zero = fun(s,p,i,j-2);

        bool many = (s[i] == p[j-1] || p[j-1] == '.')  && fun(s, p, i-1, j);

        return (zero || many);
    }

    else return false;







}


class Solution {
public:
    bool isMatch(string s, string p) {
        
        int i = s.size();
        int j = p.size();

        return fun(s, p, i-1, j-1);
    }
};