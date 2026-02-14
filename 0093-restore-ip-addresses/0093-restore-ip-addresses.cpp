class Solution {
public:
    vector<string> result;
    string temp;

    void fun(string &s, int idx , int dotcnt){

        if (dotcnt == 4 && idx != s.size()) return;

        if (idx == s.size() ){
            
            if (dotcnt == 4){
                temp.pop_back();
               // cout<<dotcnt <<" "<<temp<<endl;
                result.push_back(temp);
                // temp.push_back('.');
            }

            return;
        }

        for (int i = idx ; i<s.size() && i<idx+3 ; i++){


            string t = s.substr(idx , i-idx+1);

            if (i != idx && t[0] == '0') continue;
            

            if ( (stoi(t)) <= 255 ){
                int sz = temp.size();
                temp+= t;
                temp.push_back('.');

              //  cout<<"before call  "<<temp<<endl;
                fun(s, i+1, dotcnt+1);
                temp.resize(sz);
                //cout<<"after call  "<<temp<<endl;


            }
            
        }

    }


    vector<string> restoreIpAddresses(string s) {
        
        temp = "";
        int idx = 0, dotcnt = 0 ;
        fun(s, idx, dotcnt);



        return result;


    }
};