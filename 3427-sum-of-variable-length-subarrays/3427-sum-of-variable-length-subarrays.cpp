class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            for (int j = i; j >= max(0, i - nums[i]); j--) {
                sum += nums[j];
            }
        }

        return sum;
    }
};