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

void InsertAtEnd(Node*&head,int val){
    
    Node* node=new Node(val);

    if(head==NULL){
        head=node;
        head->next=head;
    }

    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}
// void Insertatbegin

void InsertAtbetween(Node*&head,int pos,int val){
    Node* node=new Node(val);
    Node*temp=head;
    
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    temp->next=node;
    node->next=

}

void DeleteInBegining(Node*&head){
    Node*temp=head;
    Node*temp2=head;
    while(temp2->next!=head){
        temp2=temp2->next;
    }
    head=temp->next;
    delete temp;
    temp2->next=head;
}

void DeleteInEnd(Node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    Node*temp2=head;
    while(temp2->next->next!=head){
        temp2=temp2->next;
    }
    head=temp->next;
    delete temp;
    temp2->next=head;
}




int main(){

}