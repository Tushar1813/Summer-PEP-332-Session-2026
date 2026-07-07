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

void Insertatbegin(Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node*last=head;
    while(last->next!=head){
        last=last->next;
    }
    node->next=head;
    last->next=node;
}

void InsertAtbetween(Node*&head,int pos,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node*temp=head;
    if(pos==1){
        Node*last=head;
        while(last->next!=head){
            last=last->next;
        }
        node->next=head;
        last->next=node;
        head=node;
        return;
    }
    
    for(int i=1;i<pos-1 ;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;

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
    Node*temp;
    Node*last=head;
    while(last->next->next!=head){
        last=last->next;
    }
    temp=last->next;
    last->next=head;
    delete temp;
}


void DeleteInBetween(Node* &head,int pos){
    if(head==NULL){
        return;
    }
    Node*temp=head;
    if(pos==1){
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }
        Node* last=head;
        while(last->next!=head){
            last=last->next;
        }
        head=temp->next;
        last->next=head;
        delete temp;
        return;
    }
    Node*node;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node=temp->next;
    temp->next=temp->next->next;
    delete node;
}




int main(){

}