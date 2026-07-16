#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preOrder(Node* root){  
    if(root==NULL){
        return;
    }
    cout<< root->data <<endl;
    preOrder(root->left);
    preOrder(root->right);
    
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<endl;
    inOrder(root->right);
    

}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<< endl;
}

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=countNodes(root->left);
    int right=countNodes(root->right);
    return left+right+1;
}

int countLeaves(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    int left=countLeaves(root->left);
    int right=countLeaves(root->right);
    return left+right;
}

int CalculateSumOfNodes(Node* root){
    
    if(root==NULL){
        return 0;
    }
    
    int left=CalculateSumOfNodes(root->left);
    int right=CalculateSumOfNodes(root->right);
    return root->data+left+right;
}

int height(Node* root) {
        // code here
        if(root==NULL){
            return -1;
        }
        int left=height(root->left);
        int right=height(root->right);
        
        int maxHeight=max(left,right)+1;
        return maxHeight;
        
}

void levelOrder(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();

        if(frontNode!=NULL){
            cout<<frontNode->data<<" ";

            if(frontNode->left)q.push(frontNode->left);
            if(frontNode->right)q.push(frontNode->right);
        }
        else if(q.empty()){
            q.push(NULL);
        }
    }

}


int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    // cout<<"preOrder: "<<endl;
    // preOrder(root);
    // cout<<"Inorder:"<<endl;
    // inOrder(root);
    // cout<<"PostOrder: "<<endl;
    // postOrder(root);
    cout<<countNodes(root)<<endl;
    cout<<countLeaves(root)<<endl;
    cout<<CalculateSumOfNodes(root)<<endl;
    return 0;
}