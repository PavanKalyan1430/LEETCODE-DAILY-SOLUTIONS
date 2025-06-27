class Solution {
public:
    string generateTag(string s) {
        
     string result = "#";
     int flag = 0;

    for (int i=0; i<s.size(); i++){

       if (s[i] == ' ') continue;

       else if(flag ==1 and s[i-1] == ' '  ) {
        result+= toupper(s[i]);

       }

       else{
        result += tolower(s[i]);
        flag =1 ;
        
       }
       if (result.size() == 100) break;


    }

    return result;

     

    }
};