/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* successor(TreeNode* c) {
        c = c->right;
        while (c != NULL && c ->left!= NULL) {
            c = c->left;
        }
        return c;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) {
            return root;
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else {
            if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            } else {
                TreeNode* curr = successor(root);
                root->val = curr->val;
                root->right = deleteNode(root->right, curr->val);
            }
        }
        return root;
    }
};
