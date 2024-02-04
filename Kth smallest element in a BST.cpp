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
    int kthSmallest(TreeNode* root, int k) {
        int countnode=0;
        stack<TreeNode*>st;
        while(!st.empty() || root){
            while(root){
            st.push(root);
            root=root->left;
        }
        countnode+=1;
        root=st.top();
        if(countnode==k){
          return root->val;

        }
        st.pop();
        root=root->right;
        }return -1;

    }
};
