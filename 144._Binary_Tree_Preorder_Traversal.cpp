void preOrder(TreeNode* node, vector<int>& ans){
  if(node == NULL) return;

  ans.push_back(node->val);
  preOrder(node->left, ans);
  preOrder(node->right, ans);
}

vector<int> preorderTraversal(TreeNode* root) {
  vector<int> ans;

  if(root != NULL){
    preOrder(root, ans);
  }

  return ans;
}
