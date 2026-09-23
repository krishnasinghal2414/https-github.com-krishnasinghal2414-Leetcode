class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        int t = accumulate(begin(nums), end(nums), 0) - x;

        if (t < 0) return -1;
        if (t == 0) return n;

        int ans = 0;
        int st = 0, end = 0;
        int sum = 0;

        while (end < n) {
            sum += nums[end];

            while (st < end && sum > t)
                sum -= nums[st++];

            if (sum == t)
                ans = max(ans, end - st + 1);

            end++;
        }

        if (ans == 0) return -1;

        return n - ans;
    }
};