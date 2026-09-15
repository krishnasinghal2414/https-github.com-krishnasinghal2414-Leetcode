class Solution {
public:
    inline static bool ispal(int l, int r, string& s){
        for( ;l<r; l++, r--)
            if(s[l]!=s[r]) return 0;
        return 1;
    }
    int maxPalindromes(string s, int k) {
        const int n=s.size();
        int cnt=0, l_0=0;
        for(int r=k-1; r<n; r++){
            int l=r-k+1;
            bool a=(l>=l_0 && ispal(l, r, s))||(l>l_0 && ispal(l-1, r, s));
            cnt+=a;
            l_0+=(-a & r+1-l_0);
        }
        return cnt;
    }
};