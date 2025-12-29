class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        // Step 1: Build rank map
        vector<int> rank(26);
        for (int i = 0; i < 26; i++) {
            rank[order[i] - 'a'] = i;
        }

        // Step 2: Compare adjacent words
        for (int i = 0; i < words.size() - 1; i++) {
            string &a = words[i];
            string &b = words[i + 1];

            int len = min(a.size(), b.size());
            bool diffFound = false;

            for (int j = 0; j < len; j++) {
                if (a[j] != b[j]) {
                    if (rank[a[j] - 'a'] > rank[b[j] - 'a'])
                        return false;
                    diffFound = true;
                    break;
                }
            }

            // Step 3: Prefix check
            if (!diffFound && a.size() > b.size())
                return false;
        }

        return true;
    }
};
