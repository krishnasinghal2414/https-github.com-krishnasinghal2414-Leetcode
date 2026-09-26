class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.length();
        int maxl = 0;
        vector<int> chari(128, -1);
        int l = 0;
        
        for (int i = 0;i < n; i++) {
            if (chari[s[i]] >= l) {
                l = chari[s[i]] + 1;
            }
            chari[s[i]] = i;
            maxl = max(maxl, i - l + 1);
        }
        
        return maxl;

    }
};