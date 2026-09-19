// first for s count the freq of every character and when i got the same
// character in t then reduce it and return the character which have
// freq is 1 ;
class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s == "") {
            return t[0];
        }
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }
        for (char c : t) {
            freq[c]--;
        }
        for (auto p : freq) {
            if (p.second == -1) {
                return p.first;
            }
        }
        return ' ';
    }
};