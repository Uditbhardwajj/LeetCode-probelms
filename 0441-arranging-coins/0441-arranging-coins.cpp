class Solution {
public:
    int arrangeCoins(int n) {
        int x = 1;

        while (n >= (long long)x * (x + 1) / 2) {
            x++;
        }

        return x - 1;
    }
};