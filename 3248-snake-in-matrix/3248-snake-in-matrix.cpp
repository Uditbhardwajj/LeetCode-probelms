class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int ans = 0;
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == "DOWN") {
                ans += n;
            }
            if (commands[i] == "RIGHT") {
                ans += 1;
            }
            if (commands[i] == "UP") {
                ans -= n;
            }
            if (commands[i] == "LEFT") {
                ans -= 1;
            }
        }
        return ans;
    }
};