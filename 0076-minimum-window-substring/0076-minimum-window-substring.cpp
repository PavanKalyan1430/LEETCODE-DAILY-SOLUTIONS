class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size()) return "";

        vector<int> freq(128, 0);

        // Build requirement frequency
        for (char c : t)
            freq[c]++;

        int left = 0;
        int start = 0;
        int min_len = INT_MAX;

        int required = t.size();  // total characters still needed

        for (int right = 0; right < s.size(); right++) {

            // If this character was needed, reduce required
            if (freq[s[right]] > 0)
                required--;

            // Decrease frequency (include in window)
            freq[s[right]]--;

            // When window is valid
            while (required == 0) {

                // Update minimum window
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start = left;
                }

                // Remove left character from window
                freq[s[left]]++;

                // If removing makes it needed again
                if (freq[s[left]] > 0)
                    required++;

                left++;
            }
        }

        return (min_len == INT_MAX) ? "" : s.substr(start, min_len);
    }
};