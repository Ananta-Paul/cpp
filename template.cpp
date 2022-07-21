#include<iostream>
#include<typeinfo>
using namespace std;
template<class T>
T sum(T a,T b){
    return a+b;
}
int main(){
    cout<<"For int type 4+5="<<sum(4,5)<<endl;
    cout<<"For float type 1.21+.29="<<sum(1.21,.29)<<endl;
    return 0;
}