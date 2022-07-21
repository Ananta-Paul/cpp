#include<iostream>
#include<string>
using namespace std;
class Area{
    private:
    int l,b;
    public:
    void setDim(int length,int breadth){
       l=length;
       b=breadth;        
    }
    int getArea(){
        return (l*b);
    }
};
int main(){
    Area obj;
    int l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: "; 
    cin>>b;
    obj.setDim(l,b);
    cout<<"Area= "<<obj.getArea();
    return 0;

}