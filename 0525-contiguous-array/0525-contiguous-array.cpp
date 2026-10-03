class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;

        int count = 0;
        int maxlen = 0;

        // count = 0 exists before the array starts
        mp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                count++;
            else
                count--;

            if (mp.count(count)) {
                int len = i - mp[count];
                maxlen = max(maxlen, len);
            }
            else {
                // Store ONLY the first occurrence
                mp[count] = i;
            }
        }

        return maxlen;
    }
};