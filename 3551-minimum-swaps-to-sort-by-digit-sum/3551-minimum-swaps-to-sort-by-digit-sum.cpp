class Solution {
     int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
public:
    int minSwaps(vector<int>& nums) {
       int n = nums.size();
        vector<tuple<int, int, int>> info;
        info.reserve(n);
        for (int i = 0; i < n; ++i)
            info.emplace_back(digitSum(nums[i]), nums[i], i);

        sort(info.begin(), info.end());

        vector<int> destination(n);
        for (int i = 0; i < n; ++i)
            destination[get<2>(info[i])] = i;

        vector<bool> visited(n, false);
        int swaps = 0;
        for (int i = 0; i < n; ++i) {
            if (visited[i]) continue;
            int current = i, cycleSize = 0;
            while (!visited[current]) {
                visited[current] = true;
                current = destination[current];
                ++cycleSize;
            }
            swaps += cycleSize - 1;
        }
        return swaps;  
    }
};