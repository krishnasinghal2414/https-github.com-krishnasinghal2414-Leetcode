class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
       vector<int> ans;
        int curr= 1;

        for (char c : seq) {
            if (c == '(') {
                ans.push_back(1 - curr);
            } else {
                ans.push_back(curr);
            }

            curr ^= 1;
        }

        return ans;  
    }
};