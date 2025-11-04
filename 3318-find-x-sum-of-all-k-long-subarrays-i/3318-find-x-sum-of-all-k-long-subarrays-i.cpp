
struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if (a.first == b.first)
            return a.second < b.second; // larger element first if freq same
        return a.first < b.first;       // higher frequency first
    }
};


class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        vector<int> result;


        for (int i =0; i<=nums.size()-k; i++){
            
            unordered_map <int, int> m;
            priority_queue<pair<int, int> , vector<pair<int,int>>, cmp> q;

            for (int j=i; j<i+k; j++){
                m[nums[j]]++;
            }

            for(auto i: m){
                q.push({i.second,i.first});
               //cout<<i.first <<" " <<i.second<<endl;
            }

            int c = x;
            int sumy = 0;

            while(c > 0){
                cout<<q.top().first <<"   "<< q.top().second<<endl;
                sumy += (q.top().first * q.top().second);
                q.pop();
                c--;
            }

            result.push_back(sumy);
          



        }

        return result;
         


    }
};