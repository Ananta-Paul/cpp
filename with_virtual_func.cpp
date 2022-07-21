#include<iostream>
using namespace std;
class virtual_fun{
    public:
    virtual void print(){
        cout<<"\nBase without virtual function\n"<<endl;
    }
};
class D:public virtual_fun{
    public:
    void print(){
        cout<<"\nDerived class with base virtual function\n"<<endl;
    }
};
int main(){
    D d;
    virtual_fun* b=&d;
    b->print();
    return 0;

}