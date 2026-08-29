class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int md = INT_MAX;
        
        for (size_t i = 0; i < arr.size() - 1; ++i) {
            int cd = arr[i+1] - arr[i];
            
            if (cd< md) {
                md = cd;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            } 
            else if (cd == md) {
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        return ans;  
    }
};