class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         unordered_set<char> jS(jewels.begin(), jewels.end());

        int count = 0;
        for (char s : stones) {
            if (jS.count(s)) {
                count++;
            }
        }

        return count;
    }
};