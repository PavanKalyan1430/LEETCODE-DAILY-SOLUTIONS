class Solution {
public:
    string addBinary(string a, string b) {
        


        if (b.size() > a.size()){
            return addBinary(b,a);
        }

        string res = "";

        bool carry = false;
        int i = a.size()-1; 
        int j = b.size()-1;

        while (i>=0 || j>=0 || carry){

           // cout<<"hi ";
            int n1 =0;
            int n2 =0;

            //cout<<i<<"  "<<j<<endl;    

            if (i >=0 ) n1 = a[i]-'0';
            if (j >=0 )  n2 = b[j] - '0';

             int sum = (carry ^ n1 ^ n2);

             if ( (n1 == 0 && n2 == 0) || ((n1==0 ||n2 ==0) && !carry) ) carry = false;
             else carry = true;
             
             res += (sum+'0');

             i--;
             j--;

            
        }

        reverse(res.begin(), res.end());
        return res;

        
    }
};