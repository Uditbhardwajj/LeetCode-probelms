class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        long long sum = 0;
        long long sub = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                sum += nums[i];
            else
                sub += nums[i];
        }
        return sum - sub;
    }
};