int closest(Node* root,int key,int diff){//pass diff by refrence not by value
    if(root==NULL){
        return INT_MAX;
    }
    if(diff>abs(key-root->val)){
        diff=abs(key-root->val);
    }
    int x=closest(root->left,key,diff);
    int y=closest(root->right,key,diff);
    return diff;
}