Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(head!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=head){
        Node* next=next->curr;
        next->curr=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}