class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
         vector<long long> ans(k), res(k);
        for (int x : nums) {
            vector<long long> curr(k);
            int r = x % k;
            curr[r]++;

            for (int j = 0; j < k; j++)
                curr[j * r % k] += res[j];
            for (int j = 0; j < k; j++)
                ans[j] += curr[j];
            res = curr;
        }
        return ans;
    }
};