#include <iostream>
#include <stdlib.h>
#include <string>
#include<ctime>
using namespace std;
class Bank{
private:
    int p;
	    string pass,cpass;
		string accno;
struct node{
    		string date;
			int tramount;
			int balance;
			string des;
			string sign;
    struct node *next;
};
struct node* head[100];
public:
struct node* transaction(int i,int balance,int tramount,string des,string sign){
		struct node* ptr1=NULL;
		struct node* ptr2=NULL;
        ptr2=(struct node*)malloc(sizeof(struct node));
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
		if(head[i]==NULL){
			head[i]=ptr2;
		}
		else{
			ptr1=head[i];
			while(ptr1->next!=NULL){
				ptr1=ptr1->next;
			}
			ptr1->next=ptr2;
		}
		}
		 return head[i];
	}
	void trprint(int i){
		if(head[i]==NULL){
        cout<<"No transaction found\n"<<endl;
    }    
    else{
        struct node* temp=NULL;
        temp=head[i];
        cout<<"Your transaction history:\n";
        cout<<"Date and Time\t\t\tAmount\tBalance\tDescription"<<endl;
        while(temp!=NULL){
			
            cout<<temp->date<<"\t"<<temp->sign<<temp->tramount<<"\t"<<temp->balance<<"\t"<<temp->des<<endl;
            temp=temp->next;
        }
    }
	}
    void add();
};
int main()
{
    int i,n;
    i=0;
        Bank b;
        b.add();
		b.trprint(i);
		i++;
		b.trprint(i);
		
        
    return 0;
}

void Bank::add(){
	int i=0;
	head[i]=NULL;
	head[i]=transaction(i,100,100,"Deposit","+");
    //trprint(i);
	head[1]=NULL;
	head[1]=transaction(1,1000,1000,"Deposit","+");
		cout<<"L";
	//trprint(i);
 }

