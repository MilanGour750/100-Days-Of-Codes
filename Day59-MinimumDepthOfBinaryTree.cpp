class Solution {
public:
    int minDepth(TreeNode *root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right != NULL){
            return minDepth(root->right) + 1;
        }
        else if(root->right == NULL && root->left != NULL){
        	return minDepth(root->left) + 1;
        }
        else{
        	int left = minDepth(root->left) + 1;
        	int right = minDepth(root->right) + 1;
        	return (left < right ? left : right);
        }
    }
};
