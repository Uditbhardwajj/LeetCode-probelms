class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int nge = -1;
            for (int j = i + 1; j < i + (nums.size()); j++) {
                int index = j % nums.size();
                if (nums[index] > nums[i]) {
                    nge = nums[index];
                    break;
                }
            }
            ans.push_back(nge);
        }
        return ans;
    }
};