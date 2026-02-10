int setbits(int n){

    if (n == 0) return 0;

    if ( (n & 1)  != 0) return 1 + setbits(n>>1);
    else return setbits(n>>1);

    // two methods for finding,  if the number has least significant bit
     //as  set bit or not 

     // if  a no is odd it means the least bit has to be definelty 1
     //ex : 3 -> 11
     // ex : 9 -> 1001

     // and the other method is  (num & 1 ) != 0 it means the LSB is 1 


       
}


class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> result(n+1);
        result[0] = 0;

        for (int i =1; i<=n; i++){
            result[i] = setbits(i);
        }

        return result;
    }
};