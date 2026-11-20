class Solution {
public:
 void backtrack(vector<int>&arr,int i,int target,vector<vector<int>>&ans,vector<int>&combinations){
        if(target==0){
            ans.push_back(combinations);
            return;
        }

        for(int j=i;j<arr.size();++j){
            if(arr[j]>target){
                break;
            }
            combinations.push_back(arr[j]);
            backtrack(arr,j,target-arr[j],ans,combinations);
            combinations.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         sort(candidates.begin(),candidates.end());
       vector<vector<int>>ans;
       vector<int>combinations;

       backtrack(candidates,0,target,ans,combinations);
       return ans; 
    }
};