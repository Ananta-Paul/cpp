#include<iostream>
using namespace std;
template<class a,class b>void max1(a A,b B){
    //cout<<"enter two input"<<endl;
    cin>>A>>B;
    if (A>B){
        cout<<"maximum of the two input is: "<<A<<endl; 
    }
    else{
       cout<<"maximum of the two input is: "<<B<<endl;  
    }
}
int main(){
    int a,b,y,u;
    float c,d;
    char e,f,m,n;
    cout<<"Enter two int: ";
    max1(a,b);
    cout<<"Enter two float: ";
    max1(c,d);
    cout<<"Enter two char: ";
    max1(e,f);
    cout<<"Enter one int one char: ";
    max1(y,m);
    return 0;
}