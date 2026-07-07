/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* pre=NULL;
        Node*curr=head;
        Node*next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
    }
};