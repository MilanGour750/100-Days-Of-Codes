class Solution {
public:
    bool isBalanced(TreeNode *root) {
        int height=0;
        return isBalancedUtil(root, height);
    }

    bool isBalancedUtil(TreeNode* root, int& height){
       if(root==NULL){
          height=0;
          return true;
       }
       int lh=0, rh=0;
       bool isLeft = isBalancedUtil(root->left, lh);
       bool isRight = isBalancedUtil(root->right, rh);
       height = (lh > rh ? lh : rh) + 1;
       return (abs(lh-rh)<=1 && isLeft && isRight);
    }

};
