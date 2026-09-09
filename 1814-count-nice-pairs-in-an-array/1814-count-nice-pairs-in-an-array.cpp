class Solution {
public:
int M=1e9+7;
int rev(int num) {
    int r = 0;
    while (num != 0) {
        int l = num % 10;
        r = r * 10 + l;
        num /= 10;
    }
    return r;
}
int countNicePairs(vector<int>& nums) {
    int n= nums.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        nums[i]=nums[i]-rev(nums[i]);

    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=(ans+mp[nums[i]])%M;
        mp[nums[i]]++;
    }
    return ans;
    }
};