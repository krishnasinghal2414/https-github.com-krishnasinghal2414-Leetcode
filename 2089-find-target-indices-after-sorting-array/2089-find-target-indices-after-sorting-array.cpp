class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      int c1 = 0, c2 = 0;
        for(auto it : nums){
            if(it < target){
                c1++;
            }else if(it > target){
                c2++;
            }
        }
        vector<int> ans;
        int n = nums.size() - c2 - c1;
        for(int i = 0; i < n; i++){
            ans.push_back(i + c1);
        }
        return ans;  
    }
};