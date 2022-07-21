#include<iostream>
using namespace std;

class Multiplication{

public:
    int mul(int num1,int num2)
    {
        return num1*num2;
    }
    int mul(int num1,int num2,int num3)
    {
        return num1*num2*num3;
    }
};
int main()
{
    Multiplication obj;
    cout<<obj.mul(5,5)<<endl;
    cout<<obj.mul(2,3,4)<<endl;

    return 0;
}