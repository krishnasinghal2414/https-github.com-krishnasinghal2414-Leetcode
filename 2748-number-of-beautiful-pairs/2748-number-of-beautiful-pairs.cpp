class Solution {
public:
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
 int fd(int n)
{
    while (n >= 10)
        n /= 10;
     
    return n;
}
 
int ld(int n)
{
    return (n % 10);
}
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int last = ld(nums[j]),first = fd(nums[i]);
                if(gcd(last,first) == 1) ans++;
                
            }
        }
        return ans;
        
    }
};