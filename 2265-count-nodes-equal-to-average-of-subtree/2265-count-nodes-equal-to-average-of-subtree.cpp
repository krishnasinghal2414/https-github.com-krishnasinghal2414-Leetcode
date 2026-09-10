/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans=0;

public:
    int averageOfSubtree(TreeNode* root) {
        trs(root);
        return ans;  
    }
    vector<int> trs(TreeNode* root){
        if(root== nullptr){
            return {0,0};
        }
        vector<int> l=trs(root->left);
        vector<int> r=trs(root->right);
        int sum=l[0]+r[0]+root->val;
        int cnt=l[1]+r[1]+1;
        int avg=sum/cnt;
        if(avg==root->val){
            ans++;
        }
        return {sum,cnt};
    }
};