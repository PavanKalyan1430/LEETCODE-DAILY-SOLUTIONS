class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        int b = buildings.size();
        int cnt = 0;

        if (b < 5 || n < 3) return 0;

        vector<int> maxcolY (n+1, INT_MIN);
        vector<int> maxrowX (n+1, INT_MIN);

        vector<int> mincolY (n+1, INT_MAX);
        vector<int> minrowX (n+1, INT_MAX);

        for (auto i : buildings){
            int x  = i[0];
            int y  = i[1];

            maxrowX[y]= max(maxrowX[y], x);
            minrowX[y] = min(minrowX[y], x);

            maxcolY[x] = max(maxcolY[x], y);
            mincolY[x] = min(mincolY[x], y);
        }

        for (auto i : buildings){
            int x = i[0];
            int y = i[1];

            bool have_col= false;
            bool have_row = false;

            if (x > minrowX[y] && x< maxrowX[y]) have_row = true;

            if (y > mincolY[x] && y < maxcolY[x]) have_col = true;

            if (have_row && have_col) cnt +=1;

        }

        for (int i: minrowX) cout<<i<<" ";
        cout<<endl;
        for (int i: maxrowX) cout<<i<<" ";

        return cnt;




    }
};