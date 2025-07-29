int soll(struct node* root){
    if(root==NULL){
        return 0;
    }
    int sum=0;
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
        sum=sum+root->left->data;
    }
    int x=soll(root->left);
    int y=soll(root->right);
    return sum+x+y;
}