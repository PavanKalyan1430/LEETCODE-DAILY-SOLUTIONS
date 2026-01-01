class Solution {
public:     
    int ladderLength(string begin, string end, vector<string>& words) {
        

        unordered_set <string> s(words.begin(), words.end());
        
        if (!s.count(end)) return 0;
        int level = 0;

        queue<string> q;
        q.push(begin);
        s.erase(begin);


        while(!q.empty()){

            level+=1;
            int sz = q.size();

            for (int k =0; k<sz; k++){
                string w = q.front(); q.pop();

                for (int i=0; i<w.size(); i++){
                    char temp = w[i];

                    for (char c = 'a' ; c<='z' ; c++){

                        w[i] = c;
            

                        if (w == end) return level+1;


                        if (s.count(w)){
                            s.erase(w);
                            q.push(w);
                        } 

                    }
                    w[i] = temp;
                }
            }


        }

        return 0;
       


        

    }
};