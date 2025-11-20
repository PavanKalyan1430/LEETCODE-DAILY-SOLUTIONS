class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {

        // Sort by end ascending, and start descending
        sort(intervals.begin(), intervals.end(),
             [](auto &a, auto &b){
                 if (a[1] == b[1]) return a[0] > b[0];
                 return a[1] < b[1];
             });

        // a and b store the last two picked numbers
        int a = -1, b = -1;
        int result = 0;

        for (auto &v : intervals) {
            int L = v[0], R = v[1];

            bool hasA = (a >= L);
            bool hasB = (b >= L);

            // already have 2 points
            if (hasA && hasB) continue;

            // have only 1 point → add one more (always pick R)
            if (hasB) {
                result++;
                a = b;
                b = R;
            }
            else if (hasA) {
                result++;
                b = R;
            }
            else {
                // have 0 points → add two: R-1 and R
                result += 2;
                a = R - 1;
                b = R;
            }
        }

        return result;
    }
};
