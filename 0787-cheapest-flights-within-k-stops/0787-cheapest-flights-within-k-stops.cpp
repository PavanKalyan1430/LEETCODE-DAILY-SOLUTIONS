class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<vector<pair<int, int>>> adj(n);

    for (auto& flight : flights) {
        int u = flight[0], v = flight[1], w = flight[2];
        adj[u].push_back({v, w});
    }

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
    pq.push({0, src, 0});

    vector<int> stops(n, INT_MAX);

    while (!pq.empty()) {
        auto [cost, node, stop] = pq.top(); pq.pop();

        if (node == dst) return cost;
        if (stop > k || stop > stops[node]) continue;

        stops[node] = stop;

        for (auto& [nei, price] : adj[node]) {
            pq.push({cost + price, nei, stop + 1});
        }
    }

    return -1;
}

};