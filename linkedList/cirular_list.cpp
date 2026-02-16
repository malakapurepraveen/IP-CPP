#include<iostream>
using namespace std;

bool isCircular(Node* head){

    if(head==NULL){
        return false;
    }
    Node* temp=head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    return(temp==head);
}
