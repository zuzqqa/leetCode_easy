int minDepth(TreeNode* root) {
  if ( root == nullptr ) return 0;
  else{
    int leftHeight = minDepth(root->left);
    int rightHeight = minDepth(root->right);
    
    if(leftHeight == 0 || rightHeight == 0)
      return leftHeight + rightHeight + 1;
    
    return std::min(leftHeight, rightHeight) + 1;
  }
}
