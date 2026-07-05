class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i - 1] == nums[i]) {
                count++;
            } else {
                count = 0;
            }
            if (count >= 1) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
