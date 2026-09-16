class Solution {
public:
long long power(long long a, long long b) {
    long long ans = 1;
    while (b) {
        if (b & 1)
            ans = ans * a % 1000000007;
        a = a * a % 1000000007;
    b /= 2;
    }
    return ans;
}
    int numberOfSets(int n, int k) {
        const long long M = 1000000007;
        long long res = 1;
        int f = n + k - 1;
        k *= 2;
        k = min(k, f - k);
        for (int i = 1; i <= k; i++) {
            res = res * (f - i + 1) % M;
            res = res * power(i, M - 2) % M;
        }
        return res; 
    }
};