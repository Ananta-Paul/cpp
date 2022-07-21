#include<iostream>
using namespace std;
template<class A,class B,class C>
class l{
    A a;
    B b;
    C c;
    public:
    l(A a,B b,C c){
    if(a==c && b==c &&c==a)
    cout<<"all are same\n";
    else if(a>=b && a>=c)  
    cout<<a<<" is the largest ";
    else if(b>=c && b>=a)
    cout<<b<<" is the largest";
    else if(c>=a && c>=b)
    cout<<c<<" is the largest";
    }   
};
int main(){
    int a,b,c;
    float d,e,f,j;
    char g,h,i;
    cout<<"Enter one char one float one int:\n";
    cin>>g>>d>>a;
    l<char,float,int>ob(g,d,a);
    //cout<<"Enter three float value:\n";
    //cin>>e>>f>>j;
    //l<float,float,float>ob(e,f,j);
    return 0;
}