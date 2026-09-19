class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans(nums.size());

        int n = nums.size();

        int j = (n - 1) / 2;   // end of small half
        int k = n - 1;         // end of large half

        int index = 0;

        while (index < n) {
            ans[index] = nums[j];
            j--;
            index++;

            if (index < n) {
                ans[index] = nums[k];
                k--;
                index++;
            }
        }

        nums = ans;
    }
};