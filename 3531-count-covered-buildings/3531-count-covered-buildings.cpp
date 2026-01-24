class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

            if (buildings.size() < 5) return 0;
            int cnt = 0;

            unordered_map <int , vector<pair<int , int>>> mx;
            unordered_map <int , vector<pair<int , int>>> my;

           map <pair<int,int> , int> result;

            //unordered_map <int , int> res;



            for (auto i : buildings){
                int x = i[0];
                mx[x].push_back( {i[0] , i[1]});
            }

            for (auto i : buildings){
                int y = i[1];
                my[y].push_back( {i[0], i[1]} );
            }

            for (auto i : mx){
                vector<pair<int , int>> v= i.second;
                sort(v.begin(), v.end());

                for (int i=1; i<v.size()-1; i++) result[v[i]] = 1;
            }

            for (auto i : my){
                vector<pair<int , int>> v= i.second;
                sort(v.begin(), v.end());
                for (int i=1; i<v.size()-1; i++) if (result.count(v[i])) cnt +=1;
            }

            return cnt;




            






    }
};


// The hint is a bit misleading. There's no need to sort the group. There's an O(N) solution to this and to me it was more intuitive than the hints. Look at the diagram. For a point to be covered, what properties must its row and column satisfy?

// I dont want to give away too much but the idea here is that it has to be bounded in all 4 directions. So for each row and column we need the maximum and minimum value (think about how we can store and compute this efficiently). Then think about what we can do once we have the min and max value to check if the given constraint is satisfied.

// If you are still stuck, try drawing out a diagram by hand.