int getMax(Node *root){
  if(root==NULL){
    return INT_MIN;
  }
  else
    return max(root->key,getMax(root->left),getMax(root->right));
