#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int n){
        data= n;
        next = NULL;
    }

};

void insertAtEnd(Node* &head, int val ){
    Node* node = new Node(val);

    if(head==NULL){
        head=node;
        return;
    }
    Node* temp= head;

    while(temp->next==NULL){
        temp=temp->next;
    }
    temp->next = node;
}

void inserAtBeginning(Node* &head, int val){
    Node* node=new Node(val);
    node->next=head;
    head=node; 
}

void printValuesInLinkList(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<< temp->data;
        temp=temp->next;
    }
    
}

void printValuesOfevenDataLinkList(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        if(temp->data%2==0){
            cout<< temp->data;
        }
        temp=temp->next;
    }
    
}


void insertInBetween(Node* head,int pos,int val){
    Node* node=new Node(val);

    if(pos==1){
        node->next =head;
        head=node;
        return;
    }
    Node* temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    node->next= temp->next;
    temp->next= node;
}

int main(){
    // Node *node1= new Node(4);
    // Node *node2= new Node(5);
    // node1 -> next=node2;
    Node* head= NULL;

}