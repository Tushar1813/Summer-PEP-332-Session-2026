/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==NULL){
        //     return NULL;
        // }
        // if(head->next==NULL){
        //     delete head;
        //     return NULL;
        // }
        // ListNode* temp=head;
        // ListNode* temp1;
        // int count=0;
        // while(temp!=NULL){
        //     count++;
        //     temp=temp->next;
        // }
        // if(count == n){
        //     temp = head;
        //     head = head->next;
        //     delete temp;
        //     return head;
        // }
        // temp=head;
        // for(int i=0;i<count-(n+1);i++){
        //     temp=temp->next;
        // }
        // temp1=temp->next;
        // temp->next=temp1->next;
        // temp1->next=NULL;
        // return head;

        ListNode* t1=head;
        ListNode* t2=head;
        ListNode* temp;
        for(int i=0;i<n;i++){
            t2=t2->next;
        }
        if(t2==NULL){
            return head->next;
        }
        while(t2->next!=NULL){
            t1=t1->next;
            t2=t2->next;
        }
        temp=t1->next;
        t1->next=t1->next->next;
        delete temp;
        return head;
        
    }
};