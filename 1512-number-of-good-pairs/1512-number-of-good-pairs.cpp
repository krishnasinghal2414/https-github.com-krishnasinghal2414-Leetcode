class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int n=nums.size();
       int ans=0;
       unordered_map<int,int>mp;
       for(int& num : nums){
        ans+=mp[num];
        mp[num]++;
       } 
       return ans;
    }
};