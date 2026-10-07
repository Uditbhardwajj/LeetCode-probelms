class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> ans;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                ans.push_back(i);
            }
        }
        int sum = 0;
        for (int j = 0; j < ans.size(); j++) {
            sum += ans[j];
        }
        if (sum == num) {
            return true;
        } else {
            return false;
        }
    }
};