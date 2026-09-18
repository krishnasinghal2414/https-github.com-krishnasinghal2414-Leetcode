class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> count; 
        count[0] = 1; 
        int sum = 0, res = 0;
        for (int n : nums) {
            sum += n;
            if (count.find(sum - k) != count.end()) {
                res+= count[sum - k];
            }
            count[sum]++;
        }

        return res;
        
    }
};