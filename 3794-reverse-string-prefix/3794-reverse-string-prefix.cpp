
class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans = "";
        int temp = k;

        while (temp > 0) {
            ans += s[temp - 1];
            temp--;
        }

        while (k < s.size()) {
            ans += s[k];
            k++;
        }

        return ans;
    }
};
