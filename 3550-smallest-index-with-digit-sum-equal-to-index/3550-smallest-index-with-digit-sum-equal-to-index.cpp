class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        const int n=nums.size();
        for(int i=0; i<n; i++){
            int temp=nums[i], sum=0;
            for(; temp>0; temp/=10){
            sum+=temp%10;
            }
            if (sum==i) {
                return i;}
        }
        return -1;
    }
};