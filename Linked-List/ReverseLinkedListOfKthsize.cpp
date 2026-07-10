Node* curr=head;
int count=0;
while(curr!=NULL && count<k){
    curr=curr->next;
    count++;
}
if(count==k){
    Node* currNode=head;
    Node* preNode=NULL;
    Node* nextNode=NULL;
    int count2=0;
    while(count2<k){
        nextNode=currNode->next;
        currNode->next=preNode;
        preNode=currNode;
        currNode=nextNode;
        cont2++;
    }
    head->next=kReverse(curr,k);
    return preNode;
}
return head;