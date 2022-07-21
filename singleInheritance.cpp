#include<iostream>
using namespace std;
class name{
    protected:
    string a;
    int b;
    public:
    void accname(){
    string nam;
    cout<<"Enter account holder name: ";
    cin>>nam;
    a=nam;
    }
};
class acc:public name{
    public:
    void balance(){
    int bal;
    cout<<"Enter account balance: ";
    cin>>bal;
    b=bal;
    }
    void display(){
    cout<<"Name: "<<a<<endl;
    cout<<"Balance: "<<b;
    }
};
int main(){
    acc obj;
    obj.accname();
    obj.balance();
    cout<<"Account Info:"<<endl;
    obj.display();
    return 0;
}
