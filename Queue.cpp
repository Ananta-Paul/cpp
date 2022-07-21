#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=NULL;
void enqueue(){
node* temp=head;
while(temp->next!=NULL){
 temp=temp->next;
}
node* ntemp=new node();
temp->next=ntemp;
cout<<"Enter the new element:";
cin>>ntemp->data;
ntemp->next=NULL;
}
void dequeue(){
 if(head==NULL){
 cout<<"Queue is empty"<<endl;
 return;}
    node* temp=head;
    head=head->next;
    free(temp);
}
void show(){
    cout<<"Queue data:";
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* t=new node;
    node* p=new node;
    node* q=new node;
    head=t;
    t->data=1;
    t->next=p;
    p->data=2;
    p->next=q;
    q->data=3;
    q->next=NULL;
    int ch;
    while(1){
    cout<<"For enqueue press1 , For dequeue press 2 , To show Queue data press 3"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;

    switch(ch){
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        show();
        break;
        default:
        exit(0);

    }
    }

}