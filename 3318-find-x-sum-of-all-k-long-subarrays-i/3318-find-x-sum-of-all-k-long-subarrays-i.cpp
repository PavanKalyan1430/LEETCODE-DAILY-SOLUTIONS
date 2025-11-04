
// struct cmp {
//     bool operator()(pair<int,int>& a, pair<int,int>& b) {
//         if (a.first == b.first)
//             return a.second < b.second; // larger element first if freq same
//         return a.first < b.first;       // higher frequency first
//     }
// };



int calculate_sum (unordered_map <int,int> &m, int x){

    priority_queue<pair<int, int> , vector<pair<int,int>>> q;

    for(auto i: m){
        q.push({i.second,i.first});
    }

    int c = x;
    int sumy = 0;

    while(c > 0 and !q.empty()){
       cout<<q.top().first <<"   "<< q.top().second<<endl;
        sumy += (q.top().first * q.top().second);
        q.pop();
        c--;
    }

    cout<<endl;

    return sumy;
}







class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        vector<int> result;
        int n= nums.size(), ans;
        unordered_map <int, int> m;

        for (int i=0; i<k; i++) m[nums[i]]++;

        ans = calculate_sum(m, x);
        result.push_back(ans);



        for (int i =1; i<=n-k; i++){

            m[nums[i-1]]--;
            m[nums[i+k-1]]++;
            
            ans = calculate_sum(m, x);
            result.push_back(ans);
          



        }

        return result;
         


    }
};