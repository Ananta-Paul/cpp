#include<iostream>
using namespace std;
class cal{
    private:
    double a;
    double A;
    public:
    void setl(){
        float l,m;
        cin>>l;
        a=l;
    }
    void get(){
        cout<<"Answer is:"<<A<<endl;
    }
    
    cal operator +(const cal&q){
        cal c;
        c.A=this->a+q.a;
        return c;
    }
    cal operator -(const cal&q){
        cal c;
        c.A=this->a-q.a;
        return c;
    }
    cal operator *(const cal&q){
        cal c;
        c.A=this->a*q.a;
        return c;
    }
    cal operator /(const cal&q){
        cal c;
        c.A=this->a/q.a;
        return c;
    }
};
int main(){
    cal c1;
    cal c2;
    cal c3;
    cal c4;
    cal c5;
    cal c6;
    cout<<"Enter one num: ";
    c1.setl();
    cout<<"Enter second num: ";
    c2.setl();
    cout<<"Enter 1 for add\nEnter 2 for substract\nEnter 3 for multiplication\nEnter 4 for division\nEnter your choice:";
    int a;
    cin>>a;
    switch (a)
    {
    case 1:
        c3=c1+c2;
        c3.get();
        break;
    case 2:
         c4=c1-c2;
         c4.get();
         break;
    case 3:
        c5=c1*c2;
        c5.get();
        break;
    case 4:
        c6=c1/c2;
        c6.get();
        break;
    default:
        cout<<"wrong input";
        break;
    }
    return 0;
}
