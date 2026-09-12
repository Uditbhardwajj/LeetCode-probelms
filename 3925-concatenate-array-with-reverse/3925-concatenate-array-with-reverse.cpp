class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> x = nums;
        reverse(x.begin(), x.end());
        vector<int> ans;

        ans.insert(ans.end(), nums.begin(), nums.end());
        ans.insert(ans.end(), x.begin(), x.end());
        return ans;
    }
};