class Solution {
public:
    string convert(string s, int numRows) {
        
        vector <string > res(numRows) ;
        string result_string = "";

        int index = 0;
        int dir = -1;

        if (numRows == 1) return s;
        
        for (int i=0; i<s.size(); i++){

            if (index == 0 or index == numRows-1){
                dir = dir * -1;
            }
            // cout<<index<<" ";
            res[index]+= s[i];
            index+= dir; 

        }

        cout<<endl;

        for (auto i : res){
            result_string +=i;
        }

        return result_string;




    }
}; 