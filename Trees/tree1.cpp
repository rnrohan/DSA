int nonleaf(node* root){
    if(root==NULL){
        return 0;
    }
    int c;
    int l=nonleaf(root->left);
    int r=nonleaf(root->right);
    if(root->left || root->right){
        c= 1;
    }
    else{
        c= 0;
    }
    return c+l+r;
}