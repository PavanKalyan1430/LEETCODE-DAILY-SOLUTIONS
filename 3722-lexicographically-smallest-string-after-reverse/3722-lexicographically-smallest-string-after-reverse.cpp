class Solution {
public:
    string lexSmallest(string s) {

        int n = s.size()-1;
        string result = s;
        
        for (int i=0; i<s.size(); i++){

            for (int j=i; j<s.size(); j++){

                string first = s.substr(0 , i);
                string first_dup = first;
                reverse(first.begin(), first.end());

                string mid = s.substr(i , j-i+1);

                string last = s.substr(j+1, n-j);

                string fir_rev = first+mid+last;

                reverse(last.begin(), last.end());

                string last_rev = first_dup + mid + last;

                string newstr = first+mid+last;

                result = min(result, min(last_rev,fir_rev));


            }

        }

        return result;

    }
};