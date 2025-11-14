void fun( int n, int i, int&flag){
    
    if ( pow(2, i) > n ) return;

    else if (pow(2, i) == n){
        flag = 1;
        return;
    }

    else fun( n, i+1, flag );
}

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int flag = 0;

        fun(n, 0, flag);

        return flag;
    }
};