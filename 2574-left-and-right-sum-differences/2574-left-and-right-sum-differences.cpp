class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
              int ls=0;
              int rs=0;
              for(int j=0;j<i;j++){
                ls+=nums[j];
              }
              for(int k=i+1;k<nums.size();k++){
                rs+=nums[k];
              }
              ans.push_back(abs(ls-rs));
        }
        return ans;
    }
};