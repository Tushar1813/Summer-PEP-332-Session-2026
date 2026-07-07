/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
  
    Node* reverse(Node* head){
        Node* curr=head;
        Node* pre=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
            
        }
    }
    
    bool isPalindrome(Node *head) {
        //  code here
        Node* fast=head;
        Node* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=reverse(slow);
        
        Node* p1=head;
        Node* p2=slow;
        
        
        while(p2!=NULL){
            if(p1->data!=p2->data){
                return false;
            }
            p1=p1->next;
            p2=p2->next;
        
        }
        return true;
    }
};