class Solution {
public:
    double trimMean(vector<int>& arr) {
        double n = arr.size();
        sort(arr.begin(), arr.end());
        int f = 0.05 * n;
        int l = 0.05 * n;
        double r = n - f - l;
        while (l--) {
            arr.pop_back();
        }
        reverse(arr.begin(), arr.end());
        while (f--) {
            arr.pop_back();
        }
        long long sum = accumulate(arr.begin(), arr.end(), 0);
        return (double)sum / r;
    }
};