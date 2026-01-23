class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        
        vector<int> result(n, 0);
        vector<int> diff(n+1, 0);

        for (int i=0; i<bookings.size(); i++){
            int l = bookings[i][0];
            int r = bookings[i][1];
            int d = bookings[i][2];

            diff[l-1] += d;
            diff[r] += -d;

        }

       for (int i =1 ; i<diff.size()-1; i++) diff[i] += diff[i-1];



        diff.resize(n);
        return diff;


    }
};