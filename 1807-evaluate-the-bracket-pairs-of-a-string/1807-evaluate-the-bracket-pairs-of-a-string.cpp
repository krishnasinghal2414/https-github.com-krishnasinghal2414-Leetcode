class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
           unordered_map<string, string> map;
        for (auto& k : knowledge) map[k[0]] = k[1];

        string ans, key;
        bool in = false;

        for (char c : s) {
            if (c == '(') { in = true; key = ""; }
            else if (c == ')') {
                in = false;
                ans += map.count(key) ? map[key] : "?";
            }
            else if (in) key += c;
            else ans += c;
        }
        return ans;
    }
};