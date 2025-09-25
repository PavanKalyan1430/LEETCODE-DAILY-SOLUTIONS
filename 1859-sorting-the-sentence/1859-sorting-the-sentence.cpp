class Solution {
public:
    string sortSentence(string s) {
    
    string word = "";
    string answer = "";

    int len = 0;

    for (int i=0 ;i<s.size(); i++){
        if (s[i] == ' ') len++;
    }

    len++;

     vector <string > result(len);

     for (int i=0; i<s.size(); i++){
        

        if (isdigit(s[i])){
            int dig = s[i] - '0';
            result[dig-1] = word;
            word = "";
            i++;
        }

        else word+=s[i];


     }

     for (int i=0; i<result.size(); i++){

        if (i == result.size()-1) answer+= result[i];

        else{
            answer+= result[i];
            answer+=" ";

        }
     }

     return answer;


    }
};