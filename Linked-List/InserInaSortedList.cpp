/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        
        Node*temp=head;
        Node*node=new Node(key);
        if(head==NULL){
            head=node;
            return node;
        }
        if(temp->data >= key){
            node->next=head;
            head=node;
            return node;
        }
        
        else{
            while(temp->next!=NULL){
            
            if(temp->data <= key && temp->next->data >=key){
                node->next=temp->next;
                temp->next=node;
                return head;
            }
            temp=temp->next;
            
            }
            temp->next=node;
            return head;
            
        }
        
    }
};