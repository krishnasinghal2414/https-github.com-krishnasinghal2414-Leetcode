class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lc;

        for(auto& m : matches) {
            int winner = m[0];
            int loser = m[1];

            if(lc.find(winner) == lc.end()) {
                lc[winner] = 0;
            }

            lc[loser]++;
        }

        vector<int> zero_loss;
        vector<int> one_loss;

        for(auto& entry : lc) {
            int player = entry.first;
            int losses = entry.second;

            if(losses == 0) {
                zero_loss.push_back(player);
            }
            else if(losses == 1) {
                one_loss.push_back(player);
            }
        }

        sort(zero_loss.begin(), zero_loss.end());
        sort(one_loss.begin(), one_loss.end());

        return {zero_loss, one_loss};
    }
};