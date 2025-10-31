class Solution {
public:
    bool hasSameDigits(string s) {
        int len = s.size();
        string str1;

        while(len > 2){
            str1 = "";
            for (int i=0; i<s.size()-1; i++){
                int sumy=0;
                sumy += (s[i]-'0' + s[i+1]-'0') % 10; 
                str1 += sumy+'0';
            }
            //cout<<str1<<" ";
            s= str1;
            len-=1;
        }
        cout<<s<<" ";
        return s[0]==s[1];

    }
};