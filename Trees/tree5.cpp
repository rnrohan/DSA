int findmax(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(root->data,max(findmax(root->left),findmax(root->right)));
}