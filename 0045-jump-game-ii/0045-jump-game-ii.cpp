class Solution {
public:
    int jump(vector<int>& nums) {
         int n= nums.size();
        int r=0;
        int c=0;
        int e=0;
        for(int i=0;i<n-1;i++){
           
            r=max(r,i+nums[i]);
             if(i == e) {
                c++;
                e = r;
            }

        }
        return c;
    }
};