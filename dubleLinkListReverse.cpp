#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *pve;
};
Node *ptr,*temp,*prev;
Node *head=NULL;
int main(){

    for(int i=1;i<=10;i++){
         ptr= new Node;
        ptr->data=i;
         ptr->next=NULL;
         ptr->pve=NULL;

        if(head==NULL){

            head=ptr;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->pve=temp;
            ptr->next=NULL;
        }
    }
    temp=head;
    cout<<"Original Data"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    temp=head;
    cout<<"\n Reverse Data"<<endl;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->pve;
    }

    return 0;
}
