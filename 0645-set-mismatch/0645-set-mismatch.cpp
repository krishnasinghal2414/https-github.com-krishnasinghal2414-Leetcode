class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        
        sort(nums.begin(), nums.end());

        int d = -1;
        int m = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                d = nums[i];
                break;
            }
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (!binary_search(nums.begin(), nums.end(), i)) {
                m = i;
                break;
            }
        }

        ans.push_back(d);
        ans.push_back(m);

        return ans;
    }
};