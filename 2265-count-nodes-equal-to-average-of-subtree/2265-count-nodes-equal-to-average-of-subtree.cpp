
class Solution {
public:
int ans = 0;
pair<int, int> solve(TreeNode* root){
    if(root == NULL){
    return {0, 0};
}
pair<int, int> left = solve(root->left);
pair<int, int> right = solve(root->right);
int totalSum = left.first + right.first + root->val;
int totalCount = left.second + right.second + 1;
if(root->val == totalSum / totalCount){
    ans++;
}
return {totalSum, totalCount};
}
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna