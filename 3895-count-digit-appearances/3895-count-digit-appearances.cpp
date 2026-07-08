class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int n = nums[i];

            while (n > 0) {
                int d = n % 10;
                mp[d]++;
                n /= 10;
            }
        }
       return mp[digit];
    }
};