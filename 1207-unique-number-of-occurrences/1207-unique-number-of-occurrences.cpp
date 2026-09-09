class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        vector<int> frequencies;

        for (auto p : freq) {
            frequencies.push_back(p.second);
        }

        sort(frequencies.begin(), frequencies.end());
        for (int i = 0; i < frequencies.size()-1; i++) {
            if (frequencies[i] == frequencies[i + 1]) {
                return 0;
            }
        }
        return 1;
    }
};