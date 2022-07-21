#include<iostream>
using namespace std;
class acc{
    protected:
        string a;
        int b;
        int c;
        public:
    void accinfo(){
        
         string nam;
         int bal;
        cout<<"Enter account holder name: ";
        cin>>nam;
        cout<<"Enter account balance: ";
        cin>>bal;
        a=nam;
        b=bal;    
    }
};
class withdrawbal{
    protected:
    int W;
    public:
    void withdraw(){
    int w;
    cout<<"Enter withdraw amount :";
    cin>>w;
    W=w;
}
};
class afterwithdraw:public acc,public withdrawbal{
    public:
    void display(){
    cout<<"Account Info: "<<endl;
    cout<<"Name: "<<a<<endl;
    cout<<"Available balance: "<<b-W;
    }
};
int main(){
    afterwithdraw obj;
    obj.accinfo();
    obj.withdraw();
    obj.display();
    return 0;
}