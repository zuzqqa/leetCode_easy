void inOrder(TreeNode* node, vector<int>& inOr){
  if(node == NULL) return;
  
  inOrder(node->left, inOr);
  inOr.push_back(node->val);
  inOrder(node->right, inOr);
}

vector<int> inorderTraversal(TreeNode* root) {
  vector<int> result;
  
  
  inOrder(root, result);
  
  return result;
}
