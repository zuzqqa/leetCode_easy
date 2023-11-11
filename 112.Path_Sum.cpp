bool hasPathSum(TreeNode* root, int targetSum) {
  if(root == nullptr) return 0;

  int sum = targetSum - root->val;
  bool ans = 0;

  if(sum == 0 && root->left == nullptr && root->right == nullptr) return 1;

  if(root->left)
    ans = ans || hasPathSum(root->left, sum);
  if(root->right)
    ans = ans || hasPathSum(root->right, sum);

  return ans;
}
