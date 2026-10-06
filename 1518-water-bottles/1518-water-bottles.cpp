class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles;
        int k = numExchange;
        int count = n;
        int rem = 0;
        while (n >= k) {
            count += n / k;
            rem = n % k;
            n = n / k;
            n += rem;
        }
        return count;
    }
};