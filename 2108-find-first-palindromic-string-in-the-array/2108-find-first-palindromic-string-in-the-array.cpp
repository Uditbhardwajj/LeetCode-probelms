class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            bool palindrome = true;
            int n = words[i].size();

            for (int j = 0; j < n / 2; j++) {
                if (words[i][j] != words[i][n - 1 - j]) {
                    palindrome = false;
                    break;
                }
            }

            if (palindrome) {
                return words[i];
            }
        }

        return "";
    }
};