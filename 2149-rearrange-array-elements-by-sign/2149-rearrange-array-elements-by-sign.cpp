class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
       vector<int> ans(n);
       vector<int> a;
       vector<int> b;
       for(int i=0;i<n;i++){
        if(nums[i]<0) b.push_back(nums[i]);
        else a.push_back(nums[i]);
              } 
        ans[0]=a[0];
        int k=1;
        int j=0;
        for(int i=1;i<n;i++){
            if(i%2==0){
                ans[i]=a[k];
                k++;
            }
            else{
                ans[i]=b[j];
                j++;
            }
        
        }
        return ans;
    }
};