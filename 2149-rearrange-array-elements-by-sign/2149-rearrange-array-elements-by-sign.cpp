class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
       vector<int> ans(n);
     int pid=0;
     int nid=1;
     for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[pid]= nums[i];
            pid+=2;
        }
        else{
            ans[nid]=nums[i];
            nid+=2;
        }
     }
     return ans;
    }
};