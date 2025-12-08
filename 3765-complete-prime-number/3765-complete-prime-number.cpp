bool fun(int n){

    if (n == 1) return false;

    if (n == 2 || n == 3 || n == 7) return true;

    if (n % 2 == 0 || n % 3 == 0 || n% 7 == 0) return false;

    for (int i= 2; i<n/2; i++){
        if (n % i == 0 ) return false;
    }
    return true;
}

class Solution {
public:
    bool completePrime(int num) {


        vector <int> pref;
        vector <int> suff;

        string s = to_string(num);

        string first = "";
        string last = "";

        int n = s.size()-1;

        for (int i=0; i<s.size(); i++){

            first += s[i];
            last = s[n-i] + last; 

            cout<<first <<"     "<< last<<endl;

            pref.push_back( stoi(first) );
            suff.push_back( stoi(last) );

        }


        for (int i=0; i<pref.size(); i++){
            if ( !fun(pref[i]) ||  !fun(suff[i]) ) return false;
        }  

        return true; 



        
    //    // if (num == 1) return false;

    //     string s = to_string(num);

    //     int n = s.size();

    //     if (n == 1) return fun(num);

    //     if (n % 2 != 0) return false;


    //     string s1, s2;


    //     for (int i= 0; i<n; i++){
            
    //         if (i < n/2) s1 += s[i];
    //         else s2 += s[i];
    //     }

    //     int n1 = stoi(s1);
    //     int n2 = stoi(s2);

    //     if (fun(num) and fun(n1) and fun(n2)) return true;
    //     else return false;

    //     return true;
    }
};