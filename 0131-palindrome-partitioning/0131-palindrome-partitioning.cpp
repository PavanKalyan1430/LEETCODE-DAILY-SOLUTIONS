bool isPalindrome(string s, int start, int end){
    int left = start;
    int right = end;

    while(left < right ){
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }

    return true;
}


void fun (vector<vector<string>> &result, vector<string> temp, string s, int start){

    if (start == s.size()){
        result.push_back(temp);
        return ;
    }

    for (int i=start; i<s.size(); i++){
        if (isPalindrome(s,start, i)){
           temp.push_back(s.substr(start, i - start + 1));
           fun(result, temp,s, i+1);
           temp.pop_back(); 
        }
    }


}

class Solution {
public:
    vector<vector<string>> partition(string s) {

        vector<vector<string>> result;
        vector <string> temp;
        
        fun(result, temp, s, 0);

        return result;

    }
};