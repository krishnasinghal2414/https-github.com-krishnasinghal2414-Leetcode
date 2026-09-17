class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> a(n, INT_MAX);
        int left = 0;
        int sum = 0;
        int res = INT_MAX;

        for (int right = 0; right < n; ++right) {
            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                ++left;
            }

            if (sum == target) {
                int currl = right - left + 1;

                if (left > 0 && a[left - 1] != INT_MAX) {
                    res = min(res, currl + a[left - 1]);
                }

                a[right] = currl;
            }

            if (right > 0) {
                a[right] = min(a[right], a[right - 1]);
            }
        }

        return res == INT_MAX ? -1 : res;
    }
};