bool isBST(struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root>data <root->left->data || root->data > root->right->data){
        return false;
    }
    bool ltree=isBST(root->left);
    bool rtree=isBST(root->right);
    return ltree && rtree;
}