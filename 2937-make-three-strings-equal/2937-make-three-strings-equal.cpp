class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {

        int count =0;

        if (s1[0] != s2[0] or s2[0]!=s3[0]) return -1;

        for (int i=0; i<s1.size(); i++){

            if (s1[i] != s2[i] or s2[i]!=s3[i]) break;

            else count +=1;
        }

        int l1 = s1.size();
        int l2 = s2.size();
        int l3 = s3.size();

        return  ( (l1- count) + (l2-count)+ (l3-count) );
        

    }
};