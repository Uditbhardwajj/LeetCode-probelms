class Solution {
public:
    bool checkDivisibility(int n) {
        int s = 0;
        int p = 1;
        int dig = 0;
        int temp = n;

        while (temp) {
            dig = temp % 10;
          
            s += dig;
            p *= dig;
            temp = temp / 10;
        }

        if (n % (s + p) == 0) {
            return true;
        } else{
            return false;
        }
    }
};