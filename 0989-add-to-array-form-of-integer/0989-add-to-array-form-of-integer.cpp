class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;

        int i = num.size() - 1;
        int carry = 0;

        while (i >= 0 || k > 0 || carry > 0) {
            int digit = 0;

            if (i >= 0) {
                digit = num[i];
                i--;
            }

            int sum = digit + (k % 10) + carry;

            ans.push_back(sum % 10);

            carry = sum / 10;
            k /= 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};