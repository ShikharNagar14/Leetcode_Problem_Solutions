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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans;
        if(root==NULL){
            return root;
        }
        if(root->val==val){
            return root;
        }
        else if(root->val>val){
            ans=searchBST(root->left,val);
        }
        else{
            ans=searchBST(root->right,val);
        }
        return ans;
    }
};