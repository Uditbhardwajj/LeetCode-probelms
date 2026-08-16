class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {

                string ans = ""; // ek empty string bnayi

                for (int j = 0; j <= i;
                     j++) { // yeh loop i tk cahlega yaani agar 43268 yaani 3 pr
                            // i % 2 hoga and iska index 1 hai toh j loop i= 1
                            // tk string print krega ans me
                    ans += num[j];
                }

                return ans;
            }
        }
        return "";
    }
};