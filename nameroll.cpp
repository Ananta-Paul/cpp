#include<iostream>
#include<string>
using namespace std;
class student{
    public:
        string Name;
        int Roll_No;
};
int main(){
    student st1;
    st1.Name="john";
    st1.Roll_No=2;
    cout<<"NAME= "<<st1.Name<<endl;
    cout<<"ROLL= "<<st1.Roll_No<<endl;
}
