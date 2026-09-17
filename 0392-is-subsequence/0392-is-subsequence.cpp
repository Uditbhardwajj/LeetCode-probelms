class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        int count = 0;

        if (s == "") {
            return true;
        }

        for (int i = 0; i < s.size(); i++) {

            for (int j = index; j < t.size(); j++) {

                if (s[i] == t[j]) {
                    count++;
                    index = j + 1;
                    break;
                }

            }
        }

        if (count == s.size()) {
            return true;
        } else {
            return false;
        }
    }
};