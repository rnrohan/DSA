//level order
vector<int> Level_order(Node* root){
    vector<int>v;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* current=q.front();
        q.pop();
        v.push_back(current->val);
        if(current->left){
            q.push(current->left);
        }
        if(current->right){
            q.push(current->right);
        }
    }
    return result;
}
int count(Node* root){
    if(root==NULL){
        return 0;
    }
    return count(root->left)+count(root->right)+1;
}
Node* helper(Node* root,int key,Node* prev){
    if(root==NULL){
        Node* nnode=new Node();
        prev->next=nnode;
        nnode->val=key;
        nnode->left=NULL;
        nnode->right=NULL;
        return nnode;
    }
    if(root->val>key){
        prev=root;
        helper(root->left,key,prev);
    }
    else{
        prev=root;
        helper(root->right,key,prev);
    }
}
void insert(Node* root,int key){
    Node* prev=root;
    root=helper(root,key,prev);
}