bool isFull(Node* root){
    if(root==NULL){
        return true;
    }
    if((root->left && !root->right) || (!root->left && root->right)){
        return false;
    }
    bool x=isFull(root->left);
    bool y=isFull(root->right);
    return x&&y;
}