class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size())
            return false;

        vector<int> a(256, -1);
        vector<int> b(256, -1);

        int num = 0;

        for (int i = 0; i < s.size(); i++) {

            if (a[s[i]] == -1) {
                a[s[i]] = num;
                num++;
            }

        }

        num = 0;

        for (int i = 0; i < t.size(); i++) {

            if (b[t[i]] == -1) {
                b[t[i]] = num;
                num++;
            }

        }

        for (int i = 0; i < s.size(); i++) {
            if (a[s[i]] != b[t[i]])
                return false;
        }

        return true;
    }
};