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
public:
 bool symmetric(TreeNode* leftr, TreeNode* rightr){
        if(leftr == nullptr && rightr == nullptr)
            return true;
        if((leftr == nullptr && rightr != nullptr)  || (leftr != nullptr && rightr == nullptr))
            return false;
        if(leftr -> val != rightr -> val)
            return false;
        return symmetric(leftr -> left, rightr -> right) && symmetric(leftr -> right, rightr -> left);
    }
    bool isSymmetric(TreeNode* root) {
         return symmetric(root -> left, root -> right);

    }
};