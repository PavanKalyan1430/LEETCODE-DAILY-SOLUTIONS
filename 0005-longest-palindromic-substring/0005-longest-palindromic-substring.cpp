int expand(string &s , int left, int right ){

    while (left >=0 && right <s.size() && s[left] == s[right]){
        left-=1;
        right+=1;
    }

//    a a a
//  -1 0 1 2 3
    //cout<<right-left-1<<" ";
    return right-left-1;

    //return right-left-1;

}



class Solution {
public:
    string longestPalindrome(string s) {
        
        int sz = s.size();

        int i = 0;
        int maxi = 0, maxlen = 0, start;

        while (  i < sz){
            int odd = expand(s, i-1, i+1);
            int even = expand(s, i-1,i );
            
            maxi = max(odd, even);
            if (maxi > maxlen){
                maxlen = maxi;
                start = i- (maxlen/2);
            }

            i+=1;
            
        }

        //cout<<endl<<start <<" "<<maxlen;
        return s.substr(start , maxlen);
    }
};