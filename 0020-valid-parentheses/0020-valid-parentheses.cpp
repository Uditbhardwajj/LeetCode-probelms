class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }//--> saare opening bracket push krne ke liye
            else {

                if (st.empty())
                    return false;

                char ch = st.top();
                st.pop();

                if ((s[i] == ')' && ch == '(') ||
                    (s[i] == '}' && ch == '{') ||
                    (s[i] == ']' && ch == '[')) {// for comb chechk
                    continue;
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};