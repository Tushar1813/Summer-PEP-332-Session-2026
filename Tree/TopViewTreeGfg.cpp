/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> result;
        
        if(root==NULL){
            return result;
        }
        map<int,int> topNode;  //we used this as we need to give output in sorted manner as per hd horizontal distance
        queue<pair<Node*,int>> q;
        
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int> frontVal=q.front();
            q.pop();
            Node* node=frontVal.first;
            int hd=frontVal.second;
            
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=node->data;
            }
            if(node->left)q.push(make_pair(node->left,hd-1));
            if(node->right)q.push(make_pair(node->right,hd+1));
        }
        for(auto i: topNode){
            result.push_back(i.second);
        }
    }
};