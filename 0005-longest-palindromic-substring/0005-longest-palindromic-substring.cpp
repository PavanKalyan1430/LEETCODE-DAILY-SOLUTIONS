int expand(string &s , int left , int right){

    while (left>=0 && right<s.size() && s[left] == s[right]){
        left-=1;
        right+=1;
    }

    return right-left-1;
}


class Solution {
public:
    string longestPalindrome(string s) {
        
        int start = 0;
        int end = 0;

        for (int i=0; i<s.size(); i++){
            
            int len1 = expand(s, i, i) ;  // oddlength  cbabc len = 5
            int len2 = expand(s, i , i+1 ) ;      // even lenght abccba

            int len = max(len1 , len2);

            if (len > end - start){
                start = i - (len-1)/2;
                end =   i + len/2;
            }
        }

        string result = s.substr(start , end-start+1);
        return result;
    }
};