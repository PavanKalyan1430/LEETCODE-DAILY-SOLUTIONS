class Solution {
public:
    long long minMoves(vector<int>& nums) {

        int n = nums.size();
        int neg = 0;
        long long pos = 0;
        int ind;

        for (int i=0; i<nums.size(); i++){

            if (nums[i] < 0){
                neg = nums[i];
                ind = i;
            }

            else pos+= nums[i];
        }

        if (abs(neg) > pos) return -1;

        int i = ind-1;
        int j = ind+1;

        i= (i+n) % n;
        j = j%n;

        int dist = 1;
        long long result = 0;
       // int give_i, give_j;


        while(dist < n and neg < 0){

            long long give_i = 0, give_j = 0;


            if ( i>= 0 and nums[i] !=0 and neg < 0){

                give_i = min(nums[i] , -neg);
                neg += give_i;
                nums[i]-= give_i;
            }

            if (j <n and nums[j] != 0 and neg < 0){
                give_j = min(nums[j], -neg);
                neg += give_j;
                nums[j] -= give_j;
            }

            i-=1;
            j+=1;

            i= (i+n) % n;
            j = j%n;

            result += (dist * (give_i + give_j ) );
            cout<<result <<" "<<neg<<endl;
            dist+=1;



        }

        return result;









    }
};