class Solution {
public:
    int findComplement(int num) {

        int x = num;
        string s = "";

        
        while (x > 0) {
            s += to_string(x % 2);
            x /= 2;
        }

        reverse(s.begin(), s.end());

       
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';
        }

        
        int numb = stoi(s, nullptr, 2);

        return numb;
    }
};