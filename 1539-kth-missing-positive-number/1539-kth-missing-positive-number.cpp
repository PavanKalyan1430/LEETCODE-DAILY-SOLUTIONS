class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector <int> res;
        int maxi = arr[arr.size()-1];
        int h =0;
        for (int i=1; i<maxi and h <arr.size() ; i++){
            if (i != arr[h]){
                res.push_back(i);
            }

            else h+=1;
        }

        for (int i: res) cout<<i<<" ";

        if (res.size() < k){
            return arr[arr.size()-1] + k;
        }

        else return res[k-1];

       // return 0;
    }
};