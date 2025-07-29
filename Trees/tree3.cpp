//count total number of nodes
int nummodes(struct node *root){
    if(root==NULL){
        return 0;
    }
    int x=nummodes(root->left);//count nodes in left subtree
    int y=nummodes(root->right);//count nodes in right subtree
    return x+y+1;//give sum of left subtree and right subtree with root node
}