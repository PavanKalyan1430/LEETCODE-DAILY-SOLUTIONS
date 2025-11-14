// void fun( int n, int i, int&flag){
    
//     if ( pow(2, i) > n ) return;

//     else if (pow(2, i) == n){
//         flag = 1;
//         return;
//     }

//     else fun( n, i+1, flag );
// }

class Solution {
public:
    int i =0;

    bool isPowerOfTwo(int n) {
       
       

       if (n > 0) return (n & n-1) == 0 ;

       return false;


    }
};