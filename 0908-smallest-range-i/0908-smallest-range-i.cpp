class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = nums[0];
        int maxi = nums[0];
        int diff = 0;

        for (int i = 1; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        diff = (maxi - mini) - 2 * k;
        if (diff >= 1) {
            return diff;

        } else {
            return 0;
        }
    }
};