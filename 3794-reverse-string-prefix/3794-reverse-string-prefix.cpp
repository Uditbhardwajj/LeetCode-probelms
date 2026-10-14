class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans = "";

        if (k > s.size()) {
            k = k % s.size();
        }
        int temp=k;
        while (temp > 0) {
            ans += s[temp - 1];
            temp--;
        }
        while (k < s.size()) {
            ans += s[k ];
            k++;
        }
        // for (int i = k; i < s.size(); i++) {
        //     ans += s[i];
        // }

        return ans;
    }
};