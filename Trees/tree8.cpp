vecctor<vector<int>> zigzag(node* root){
    queue<node*>q;
    vector<vector<int>>v;
    q.push(root);
    while(!q.empty()){
        int n1=q.size();
        vector<int>v1;
        for(int i=0;i<n1;i++){
            node* n=q.front();
            q.pop();
            v1.push_back(n->data);
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
        v.push_back(v1);
    }
    //what we do here is in v we check for odd indexes vector and reverse them
    return v;
}