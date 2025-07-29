#include<bits/stdc++.h>
struct node{
    int data;
    node* left;
    node* right;
};
vector<int> inorder(vector<int>&v,node* root){
    if(root!=NULL){
        inorder(v,root->left);
        v.push_back(root->data);
        inorder(v,root->right);
    }
    return v;
}
int KlargestinBST(node* root,int k){
    vector<int>v;
    inorder(v,root);
    return v[v.size()-k];
}
int main(){
    
    return 0;
}

