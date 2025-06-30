#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 2, 2, 3, 4, 5, 6, 7, 9};
    vector<vector<int>> queries = {{1, 4}, {3, 6}, {4, 6}};

    vector<int> result;
    sort(vec.begin(), vec.end());

    int n = vec.size();

    for (auto query : queries) {
        int first = query[0];
        int last = query[1];

        // If out of bounds
        if (vec[0] > last || vec[n - 1] < first) {
            result.push_back(0);
            continue;
        }

        // Find first index where vec[i] >= first (lower bound)
        int left = 0, right = n - 1, lower = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (vec[mid] >= first) {
                lower = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Find last index where vec[i] <= last (upper bound)
        left = 0, right = n - 1;
        int upper = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (vec[mid] <= last) {
                upper = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        int count = max(0, upper - lower + 1);
        result.push_back(count);
    }

    // Print result
    for (int r : result) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
} 