#include<iostream>
using namespace std;
class cube{
    public:
    int l,volume;
    cube(int length){
        l=length;
        volume=l*l*l;
    }   
    void getvolume(){   
    cout<<"CUbe-Volume= "<<volume;
    }
    ~cube(){}
};
int main(){
    int a;
    cout<<"Enter length of one edge: ";
    cin>>a;
    cube obj(a);  
    obj.getvolume();
return 0;
}