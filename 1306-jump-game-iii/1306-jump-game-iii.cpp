class Solution {
public:
    bool canReach(vector<int>& arr, int i) {
        return 0 <= i && i < arr.size() && arr[i] >= 0 && (!(arr[i] = -arr[i]) || canReach(arr, i + arr[i]) || canReach(arr, i - arr[i]));
    }
};