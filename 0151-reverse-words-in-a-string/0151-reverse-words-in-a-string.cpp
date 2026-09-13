class Solution {
public:
    string reverseWords(string s) {
        string ans = "";

        int i = s.size() - 1;
        while (i >= 0) {

            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0)
                break;

            int start = ans.size();

            while (i >= 0 && s[i] != ' ') {
                ans += s[i];
                i--;
            }

            reverse(ans.begin() + start, ans.end());

            ans += ' ';
            i--;
        }

        ans.pop_back();

        return ans;
    }
};