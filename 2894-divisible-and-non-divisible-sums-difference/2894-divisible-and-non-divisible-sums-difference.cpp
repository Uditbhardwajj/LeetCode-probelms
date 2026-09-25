class Solution {
public:
    int differenceOfSums(int n, int m) {
        if (m > n) {
            return (n * (n + 1)) / 2;
        }
        if (m == 1) {
            return -(n * (n + 1)) / 2;
        }
        int nsum =0;
        int msum =0;
        nsum=(n * (n + 1)) / 2;
       
for (int i = 1; i <= n / m; i++) {
    msum += i * m;
}
        return (nsum-msum)-msum;

    }
};