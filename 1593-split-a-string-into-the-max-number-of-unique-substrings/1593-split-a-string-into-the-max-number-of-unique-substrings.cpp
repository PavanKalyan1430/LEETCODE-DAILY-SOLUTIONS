void fun(string &s , unordered_set <string>&seen , int &result, int i){

    if (i == s.size()){
        result = max(result , (int)seen.size());
        return;
    }

    string temp = "";           // as my every substring has to be new one when fuction
                                // is called,  if already it exits in the set function will
                                //not be called and a next character will be added
                                // int the for loop as it iterates.  

    for (int j = i; j<s.size(); j++){
        temp += s[i];

        if (seen.count(temp) == false ){

            seen.insert(temp);
            fun(s, seen , result,j+1);
            seen.erase(temp);

        }
    }
}


class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set <string> seen;
        int result = 0;

        fun (s, seen , result, 0);

        return result;
    }
};