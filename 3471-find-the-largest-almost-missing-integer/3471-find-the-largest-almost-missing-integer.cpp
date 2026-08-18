class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();

        int freq[100001] = {0};

        for (int i = 0; i <= n - k; i++) {

            int seen[100001] = {0};

            for (int j = i; j < i + k; j++) {

                if (seen[nums[j]] == 0) {
                    freq[nums[j]]++;
                    seen[nums[j]] = 1;
                }
            }
        }

        int ans = -1;

        for (int i = 0; i <= 100000; i++) {
            if (freq[i] == 1) {
                ans = i;
            }
        }

        return ans;
    }
};