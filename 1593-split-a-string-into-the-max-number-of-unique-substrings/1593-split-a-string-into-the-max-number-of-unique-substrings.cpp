void fun(string &s , int i, int &cnt, string temp, unordered_set<string> &m){

    if (i == s.size()){
        cnt = max(cnt , (int)m.size());
        //for (auto i : m) cout<<i<<" ";
        cout<<endl;
        return;
    }

    
    temp+=s[i];

    if (!m.count(temp)){
        m.insert(temp);
        fun(s, i+1, cnt, "", m);
        m.erase(temp);    
    }

    fun(s, i+1, cnt, temp, m);


}


class Solution {
public:
    int maxUniqueSplit(string s) {
        
        unordered_set <string> m;

        int cnt = 0;

        fun(s, 0, cnt, "", m);

        return cnt;
         

    }
};