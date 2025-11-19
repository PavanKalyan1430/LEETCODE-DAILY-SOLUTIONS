class Solution {
public:
    int countBinarySubstrings(string s) {

      int last_consecutive_count = 0;
      int consecutive_count = 1;
      int cnt = 0;


      for (int i=1 ; i<s.size(); i++){

        if (s[i] != s[i-1]){
            last_consecutive_count = consecutive_count;
            consecutive_count = 1;
            cnt+=1;
        }

        else {
            consecutive_count+=1;
            if (consecutive_count <= last_consecutive_count) cnt+=1;
        }

      }
      return cnt;


    }
};