class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root != nullptr){
            swap(root->left, root->right);
            root->left = invertTree(root->left);
            root->right = invertTree(root->right);
        }
        return root;
    }
};
