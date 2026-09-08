class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0 , p=0;
        for(int &x: gain){
            p+=x;
            ans=max(ans,p);
        }
        return ans;
    }
};