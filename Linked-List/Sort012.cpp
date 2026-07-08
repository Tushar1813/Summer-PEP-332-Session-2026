/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* zero=new Node(-1);
        Node* p0=zero;
        Node* one=new Node(-1);
        Node* p1=one;
        Node* two=new Node(-1);
        Node* p2=two;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                p0->next=temp;
                p0=p0->next;
            }
            else if(temp->data==1){
                p1->next=temp;
                p1=p1->next;
            }
            else{
                p2->next=temp;
                p2=p2->next;
            }
            temp=temp->next;
        }
        p2->next=NULL;
        p0->next=one->next;
        p1->next=two->next;
        return zero->next;
    }
};