#include<iostream>
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

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"preOrder: "<<endl;
    preOrder(root);
    cout<<"Inorder:"<<endl;
    inOrder(root);
    cout<<"PostOrder: "<<endl;
    postOrder

    return 0;
}