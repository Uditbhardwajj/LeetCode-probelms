class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> st;

        while (st.find(n) == st.end()) {

            st.insert(n);// check krne ke liye ki yeh elemnt already aa chuka hai yaa nhi jisse infinite  loop se bachenge 

            int ans = 0;

            while (n != 0) {
                int digit = n % 10;
                ans += digit * digit;
                n = n / 10;
            }

            if (ans == 1) {
                return true;
            }

            n = ans;  // replace the cuurent n with ans toh while isse hi chalu ho dobara
        }

        return false;
    }
};