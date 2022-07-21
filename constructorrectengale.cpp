#include<iostream>
using namespace std;
class rectangle{
    public:
    int l,b,Area;
    rectangle (){
    cout<<"Enter length and breadth of Rectangle: ";
        cin>>l>>b;
        Area=l*b;
    }
    void area(){
    cout<<"Area ="<<l*b;
    }
    ~rectangle(){}
};
int main(){
    rectangle obj;
    obj.area();
return 0;
}
