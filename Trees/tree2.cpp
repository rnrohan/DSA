//finding height of tree
#include<iostream>
using namespace std;
int height(struct node* root){
    if(root==NULL){
    return 0;
    }
    int x=height(root->left)+1;//root node+height of left subtree
    int y=height(root->right)+1;
    if(x>y){
        return x;
    }
   return y;
}
