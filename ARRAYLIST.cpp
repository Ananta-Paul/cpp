#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctime>
//#include<windows.h>
using namespace std;
//struct node* head=NULL;
class Bank{
	private: 
		struct node {
			string date;
			int tramount;
			int balance;
			string des;
			string sign;
			struct node* next;
		};
		struct list{
			struct node* head;
		};
	    int p;
	    string pass,cpass;
		string accno;
	    struct person{
	    	string name,password,address,mobno;
			struct list* ptr;
	    	int amount;
		}person[100];

	public:
	Bank(){
		p==0;
	}
	struct node* transaction(struct node* head,int balance,int tramount,string des,string sign){
		struct node* ptr1=NULL;
		struct node* ptr2=(struct node*)malloc(sizeof(struct node));
		if(tramount>0){
		 time_t now = time(0);    
         char* dt = ctime(&now);
		string date=dt;
		date[date.size()-1]='\0';
		ptr2->date=date;
		ptr2->balance=balance;
		ptr2->des=des;
		ptr2->tramount=tramount;
		ptr2->sign=sign;
		ptr2->next=NULL;
		if(head==NULL){
			head=ptr2;
		}
		else{
			ptr1=head;
			while(ptr1->next!=NULL){
				ptr1=ptr1->next;
			}
			ptr1->next=ptr2;
		}
		return head;
		 }
		// return head;
	}
	void trprint(struct node* head){
		if(head==NULL){
        cout<<"No transaction found\n"<<endl;
    }    
    else{
        struct node* temp=NULL;
        temp=head;
        cout<<"Your transaction history:\n";
        while(temp!=NULL){
			
            cout<<temp->date<<"\t"<<temp->sign<<temp->tramount<<"\t"<<temp->balance<<"\t"<<temp->des;
            temp=temp->next;
        
        }
    }
	}
		void add();
        void show();
};

int main(){
	Bank b;
	b.add();
    b.show();
	//b.choice();

	return 0;
}
void Bank::add(){
	person[0].name="abc def";
	person[0].mobno="123456";
	person[0].address="fghjkjhkjhkjhkjhj";
	person[0].password="Ananta123";
	person[0].amount=20000;
	person[0].ptr=(struct list*)malloc(sizeof(list));
	person[0].ptr->head=NULL;
	person[0].ptr->head=transaction(person[0].ptr->head,person[0].amount,(person[0].amount),"Deposit","+");
	trprint(person[0].ptr->head);
	p++;

	person[1].ptr=(struct list*)malloc(sizeof(list));
	person[1].ptr->head=NULL;
	person[1].name="Safiur Rahaman";
	person[1].mobno="12345";
	person[1].address="Chalsa Para,malda";
	person[1].password="Safiur123";
	person[1].amount=30000;
	person[1].ptr->head=transaction(person[1].ptr->head,person[1].amount,(person[1].amount),"Deposit","+");
	trprint(person[1].ptr->head);
	p++;
}
void Bank::show(){
	cout<<"\nAll account holders data:\n";
	for(int i=0;i<p;i++){
		cout<<"Data of person "<<i+1<<endl;
		cout<<"Name: "<<person[i].name<<endl;
		cout<<"Address: "<<person[i].address<<endl;
		cout<<"Contact: "<<person[i].mobno<<endl;
		cout<<"amount: "<<person[i].amount<<endl;
        //cout<<"ptr:"<<person[i].ptr<<endl;

	}

}