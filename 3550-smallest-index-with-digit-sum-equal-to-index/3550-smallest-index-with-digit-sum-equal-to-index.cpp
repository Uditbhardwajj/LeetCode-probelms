class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            while (nums[i] >= 1) {
                sum += nums[i] % 10;

                nums[i] /= 10;
            }
            ans.push_back(sum);
            if (ans[i] == i) {
                return i;
            }
        }
        return -1;
    }
};