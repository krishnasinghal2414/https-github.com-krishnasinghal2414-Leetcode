class Solution {
private:
    vector<string> ans;
    void bt(string &str, int i, int j) {
        if(i == 0 && j == 0){
            ans.push_back(str);
            return;
        }
        if(i > 0){
            str.push_back('(');
            bt(str, i - 1, j);
            str.pop_back();
        }
        if(j > i){
            str.push_back(')');
            bt(str, i, j - 1);
            str.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        bt(s, n, n);
        return ans;
    }
};