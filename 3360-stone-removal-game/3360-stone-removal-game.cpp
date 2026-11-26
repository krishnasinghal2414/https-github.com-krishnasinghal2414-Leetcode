class Solution {
public:
    bool canAliceWin(int n) {
        int t = 10;
        bool a = true;

        while (n >= t) {
            n -= t;
            t--;
            a = !a;
        }

        return !a;
    }
};