class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sumP = 0, sumV = 0;

        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                sumP += nums[i];
            }
            else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                sumV += nums[i];
            }
        }

        return sumP - sumV;
    }
};