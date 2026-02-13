class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        vector<int> result;

        unordered_map <int, int> m;

        for (auto i : digits) m[i] += 1;

        //cout<<m[4]<<endl;

        int i = 100;

        while (i <= 1000){

            
            bool flag = true;
            int rem = i/100;
            int rem2 = (i/10) % 10;
            int rem3 = i % 10;

            int temp1, temp2, temp3;
            temp1 = m[rem];
            temp2 = m[rem2];
            temp3 = m[rem3];

            //cout<<rem<<" ";
            if ( m[rem] <= 0  ){
                i+= 100;
                continue;
            }
             m[rem]-=1;

            (m[rem2] > 0)  ?  m[rem2]-=1 : flag = false;
            (m[rem3] > 0)  ?  m[rem3]-=1 : flag = false;

            if (flag) result.push_back(i);

             m[rem] = temp1;
             m[rem2] = temp2;
             m[rem3] = temp3;
            //cout<<i<<" ";
             i+=2;


        }

        return result;
    }
};