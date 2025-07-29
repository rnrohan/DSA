int counthalf(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lres=counthalf(root->left);
    int rres=counthalf(root->right);
    if((root->left!=NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL)){
        return 1;//this is not true because it returns true imediately and we cannot traverse all the remanining nodes
    }
    return lres+rres;
}
//insted of that 
/*
int counthalf(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lres=counthalf(root->left);
    int rres=counthalf(root->right);
    if((root->left!=NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL)){
        return 1+lres+rres;
         }
    return lres+rres;
}
*/