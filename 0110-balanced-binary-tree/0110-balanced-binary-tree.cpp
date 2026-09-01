
class Solution {
public:
int height(TreeNode*root){
    if(root==NULL) return 0;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return 1 + max(leftHeight, rightHeight);
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(abs(leftHeight-rightHeight)>1) return false;
         if(isBalanced(root->left) && isBalanced(root->right)) return true;
         else return false;
         
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna