class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
         if (nums.size() != mx + 1) {
            return false;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < mx; i++) {
            if (nums[i] != i + 1) {
                return false;
            }
        }
        return nums[mx] == mx;
    }
    
};