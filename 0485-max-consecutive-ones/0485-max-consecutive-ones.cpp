class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int c=0;
    int r=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) c=0;
        else if(nums[i]==1) c++;
         r=max(r,c);
    }
    return r;
    }
};