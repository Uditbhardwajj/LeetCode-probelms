class Solution {
public:
    int differenceOfSums(int n, int m) {
        int nsum = (n * (n + 1)) / 2;
        int msum = 0;

        for (int i = 1; i <= n / m; i++) {
            msum += i * m;
        }

        return (nsum - msum) - msum;
    }
};