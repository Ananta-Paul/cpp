#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
using namespace std;
class Bank
{
private:
	struct node
	{
		string date;
		int tramount;
		int balance;
		string des;
		string sign;
		struct node *next;
	} * head[100];
	int p;
	string pass, cpass;
	string accno;
	struct person
	{
		string name, address, password, mobno;
		int amount;
	} person[100];

public:
	Bank()
	{
		p == 0;
	}
	void transaction(int i, int balance, int tramount, string des, string sign)
	{
		struct node *ptr1 = NULL;
		struct node *ptr2 = NULL;
		ptr2 = (struct node *)malloc(sizeof(struct node));
		if (tramount > 0)
		{
			time_t now = time(0);
			char *dt = ctime(&now);
			string date = dt;
			date[date.size() - 1] = '\0';
			ptr2->date = date;
			ptr2->balance = balance;
			ptr2->des = des;
			ptr2->tramount = tramount;
			ptr2->sign = sign;
			ptr2->next = NULL;
			if (head[i] == NULL)
			{
				head[i] = ptr2;
			}
			else
			{
				ptr1 = head[i];
				while (ptr1->next != NULL)
				{
					ptr1 = ptr1->next;
				}
				ptr1->next = ptr2;
			}
		}
		// return head;
	}
	void trprint(int i)
	{
		if (head[i] == NULL)
		{
			cout << "No transaction found\n"
				 << endl;
		}
		else
		{
			struct node *temp = NULL;
			temp = head[i];
			cout << "Your transaction history:\n\n";
			cout << "Date and Time\t\t\tAmount\tBalance\tDescription" << endl;
			while (temp != NULL)
			{

				cout << temp->date << "\t" << temp->sign << temp->tramount << "\t" << temp->balance << "\t" << temp->des << endl;
				temp = temp->next;
			}
		}
	}
	void add();
	void choice(int);
	void create();
	void show();
	void changepass(int);
	void accdetails(int);
	void balanceinq(int);
	void deposit(int);
	void withdraw(int);
	void transfer(int);
	void del(int);
	void start();
	bool valid(string);
};

int main()
{
	Bank b;
	// cout<<"L";
	b.add();
	b.start();
	// b.choice();

	return 0;
}
void Bank::add()
{
	person[0].name = "Ananta Paul";
	person[0].address = "Bachamari Paul Para,Malda";
	person[0].password = "Ananta123";
	person[0].mobno = "8967545085";
	person[0].amount = 20000;
	head[0] = NULL;
	transaction(0, person[0].amount, person[0].amount, "Deposit", "+");
	p++;
	person[1].name = "Safiur Rahaman";
	person[1].address = "Chalsapara, malda";
	person[1].password = "Safiur123";
	person[1].mobno = "1234567891";
	person[1].amount = 30000;
	head[1] = NULL;
	transaction(1, person[p].amount, (person[p].amount), "Deposit", "+");
	p++;
}
void Bank::start()
{
	string acc;
	char ch;
	int c = 1;
	while (c == 1)
	{
		cout << "\n\nIf you already have account press 1\nTo create account press 2\nFor official login press 3\nEnter your choice:";
		cin >> ch;
		system("CLS");
		switch (ch)
		{
		case '1':
		{
			cout << "Enter your account number:";
			cin >> acc;
			for (int i = 0; i < p; i++)
			{
				if (person[i].mobno == acc)
				{
					cout << "Enter password:";
					cin >> pass;
					if (pass == person[i].password)
					{
						choice(i);
					}
					else
					{
						cout << "Wrong password\n";
					}
					break;
				}
				else if (i == p - 1)
				{
					cout << "Invalid account no";
				}
			}
			break;
		}
		case '2':
		{
			create();
			cout << "\nEnter any key to exit:";
			cin >> ch;
			system("CLS");
			break;
		}
		case '3':
			cout << "Enter security key:";
			cin >> pass;
			if (pass == "8967545085")
				show();
			else
				cout << "Wrong key";
			break;
		default:
			cout << "Invalid Input";
			break;
		}
	}
}
void Bank::choice(int a)
{
	char ch;
	int c = 1;
	char C;
	while (c == 1)
	{
		cout << "\n\t********MENU*******";
		cout << "\n\t*                                           *";
		cout << "\n\t* 1. ACCOUNT DETAILS             DEPOSIT .5 *";
		cout << "\n\t*                                           *";
		cout << "\n\t* 2. BALANCE INQUARY            WITHDRAW .6 *";
		cout << "\n\t*                                           *";
		cout << "\n\t* 3. CHANGE PASSWARD            TRANSFER .7 *";
		cout << "\n\t*                                           *";
		cout << "\n\t* 4. EXIT(LOG OUT)         CLOSE ACCOUNT .8 *";
		cout << "\n\t*                                           *";
		cout << "\n\t*                 9.statement               *";
		cout << "\n\t*****************";
		cout << "\n\t  Please choose an option: ";
		cin >> ch;
		system("CLS");
		switch (ch)
		{
		case '1':
			Bank::accdetails(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '2':
			Bank::balanceinq(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '3':
			Bank::changepass(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '4':
			c = 0;
			break;
		case '5':
			deposit(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '6':
			withdraw(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '7':
			transfer(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		case '8':
			Bank::del(a);
			c = 0;
			break;
		case '9':
			trprint(a);
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		default:
			cout << "Invalid input" << endl;
			cout << "\nPress 1 for Main Menu\nPress any other key for log out(exit)\nEnter your choice:";
			cin >> C;
			system("CLS");
			if (C != '1')
				c = 0;
			break;
		}
	}
	start();
}
bool Bank::valid(string a)
{
	int error = 0;
	int i;
	if (a.size() > 5)
	{
		for (i = 0; i < a.size(); i++)
		{
			if (isupper(a[i]))
			{
				break;
			}
		}
		if (i == a.size())
		{
			cout << "Pasword must be contain a uppercase letter";
			error++;
		}

		for (i = 0; i < a.size(); i++)
		{
			if (islower(a[i]))
			{
				break;
			}
		}
		if (i == a.size())
		{
			cout << "\nPasword must be contain a lowercase letter";
			error++;
		}
		for (i = 0; i < a.size(); i++)
		{
			if (isdigit(a[i]))
			{
				break;
			}
		}
		if (i == a.size())
		{
			cout << "\nPasword must be contain a digit";
			error++;
		}
	}
	else
	{
		cout << "\nPasword must be contain at least 6 characters letter";
		error++;
	}
	if (error > 0)
	{
		cout << "\nEnter password:";
		return false;
	}
	else
		return true;
}
void Bank::create()
{
	// cin>>person[p].name;
	cout << "Enter name: ";
	fflush(stdin);
	getline(cin, person[p].name);
	cout << "Phone no: ";
	cin >> person[p].mobno;
	cout << "Address: ";
	fflush(stdin);
	getline(cin, person[p].address);
	cout << "\t\t\tCreate your password...\n(Password must be contain atleast 6 character and mixture of capital letter,small letter and digit)\nPassword:";
	int i = 0;
	while (i == 0)
	{
		cin >> pass;
		if (valid(pass))
			i = 1;
	}
	cout << "Confirm password(reEnter your password:";
	cin >> cpass;
	if (cpass == pass)
		person[p].password = cpass;
	cout << "Amount you want to add initially: ";
	cin >> person[p].amount;
	head[p] = NULL;
	transaction(p, person[p].amount, (person[p].amount), "Deposit", "+");
	cout << "Account created successfully\n";
	cout << "Your account number is :" << person[p].mobno;
	p++;
}
void Bank::show()
{
	cout << "\nAll account holders data:\n";
	for (int i = 0; i < p; i++)
	{
		cout << "Data of person " << i + 1 << endl;
		cout << "Name: " << person[i].name << endl;
		cout << "Address: " << person[i].address << endl;
		cout << "Contact: " << person[i].mobno << endl;
		cout << "amount: " << person[i].amount << endl;
	}
}
void Bank::changepass(int a)
{
	cout << "\t\t\tCreate your password...\n(Password must be contain atleast 6 character and mixture of capital letter,small letter and digit)\nPassword:";
	int i = 0;
	while (i == 0)
	{
		cin >> pass;
		if (valid(pass))
			i = 1;
	}
	cout << "Confirm password(reEnter your password:";
	cin >> cpass;
	if (cpass == pass)
		person[a].password = cpass;
	cout << "Password changed successfully";
}
void Bank::balanceinq(int i)
{
	cout << "your account balance=" << person[i].amount;
}
void Bank::accdetails(int i)
{
	cout << "Name: " << person[i].name << endl;
	cout << "Address: " << person[i].address << endl;
	cout << "Contact: " << person[i].mobno << endl;
	cout << "amount: " << person[i].amount << endl;
}
void Bank::deposit(int i)
{
	int amount;
	cout << "How much amount you want to deposit??" << endl;
	cin >> amount;
	person[i].amount += amount;
	cout << "Your current amount is " << person[i].amount << endl;
	transaction(i, person[i].amount, amount, "Deposit", "+");
}
void Bank::withdraw(int i)
{
	int amount;
back:
	cout << "How much amount you want to withdraw??" << endl;
	cin >> amount;
	if (amount > person[i].amount)
	{
		cout << "Your existing amount is just " << person[i].amount << endl;
		// Sleep(3000);
		goto back;
	}
	person[i].amount -= amount;
	cout << "Your current amount " << person[i].amount << endl;
	transaction(i, person[i].amount, amount, "Withdrawal", "-");
}
void Bank::transfer(int i)
{
	int j, amount;
	string ac;
	cout << "Enter the account no you want to transfer:";
	cin >> ac;
	for (j = 0; j < p; j++)
	{
		if (ac == person[j].mobno)
		{
		back:
			cout << "How much amount you want to transfer??" << endl;
			cin >> amount;
			if (amount > person[i].amount)
			{
				cout << "Your existing amount is just " << person[i].amount << endl;
				// Sleep(3000);
				goto back;
			}
			person[i].amount -= amount;
			person[j].amount += amount;
			string name1 = "Transfer from " + person[i].name;
			string name2 = "Transfer to " + person[j].name;
			transaction(i, person[i].amount, amount, name2, "-");
			transaction(j, person[j].amount, amount, name1, "+");
			cout << "Your current balance " << person[i].amount << endl;
			break;
		}
		else if (j == p - 1)
		{
			cout << "Invalid account no";
		}
	}
}
void Bank::del(int i)
{
	char ch;
	for (int j = i; j < p; j++)
	{
		person[j].name = person[j + 1].name;
		person[j].mobno = person[j + 1].mobno;
		person[j].address = person[j + 1].address;
		person[j].amount = person[j + 1].amount;
		p--;
		cout << "Your account is deleted\nVisit your nearest branch to collect your amount\n\nTHANK YOU" << endl;
	}
}