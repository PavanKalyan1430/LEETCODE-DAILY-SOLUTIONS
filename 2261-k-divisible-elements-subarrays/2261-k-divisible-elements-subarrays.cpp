class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {

        int n  = nums.size();
        int cnt  = 0, result  = 0;

        set < vector<int> > sety;

        map < pair<int,int> , int> m;

        for (int i = 0; i<n ; i++){
            vector<int> v = {};
            cnt  = 0;

            for (int j = i ; j<n ; j++){

                v.push_back(nums[j]);

                if (nums[j] % p == 0) cnt +=1;
                

                if (cnt  <= k && (!sety.count(v)) ){

                    // for (auto t : v) cout<<t <<" ";
                    // cout<<endl;

                    sety.insert(v);
                    result +=1;
                }

                else if (cnt > k) break;

            }

        }

        return result;
        

    }
};