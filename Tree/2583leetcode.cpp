queue<TreeNode* > q;
q.push(root);
vector<long long>levelSum;
while(!q.empty()){
    long long sum=0;
    int levelSize=q.size();
    for(int i=0;i<levelSize;i++){
        TreeNode* frontNode=q.front();
        q.pop();

        sum+=frontNode->val;

        if(frontNode->left)q.push(frontNode->left);
    }
}