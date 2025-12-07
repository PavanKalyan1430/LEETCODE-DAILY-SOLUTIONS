class Solution {
public:
    int countOdds(int low, int high) {
        
        int l , h;

        if (low % 2 == 0) l = 1;
        else l =-1;

         if (high % 2 == 0) h = 1;
        else h =-1;

        if ( (l + h)  == 2)  return (high - low) / 2;

        else return ( (high-low)/ 2 + 1);

        
    }
};