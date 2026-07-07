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

void inserAtEnd(Node*&head, int val){
    Node*node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }

    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
    
}

void InsertAtBegin(Node* &head,int val){
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

void InsertInBetween(Node* &head,int pos,int val){
    Node*node=new Node(val);
    if(pos==1){
        node->next=head;
        head=node;
        return;
    }
    Node*temp=head;
    for(int i=0;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;

}

void deleteInFront(Node* &head){

    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=temp->next;
    delete temp;
}

void deleteInEnd(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}


void deletionAtNthPosition(Node* &head,int pos){

    if(head==NULL){
        return;
    }

    Node*temp=head;
    if(pos==1){
        head=temp->next;
        delete temp;
        temp=NULL;
        return;
    }
    if(temp == NULL || temp->next == NULL){
        return;
    }
    Node*temp2;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=temp->next->next;
    delete temp2;
    temp2=NULL;
}

int main(){
    // Node *node1= new Node(4);
    // Node *node2= new Node(5);
    // node1 -> next=node2;
    Node* head= NULL;
    

}